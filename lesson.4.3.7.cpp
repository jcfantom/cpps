#include <iostream>
using namespace std;

int main()
{
    int Sum;
    int tmpSum;
    bool isChet, isEST;
    isChet = false;
    isEST = false;
    int a, b, n;
    int i;
    cin >> a >> b;
    for (n = a; n <= b; n++)
    {
        Sum = 0;
        tmpSum = 0;
        for (i = 1; i < n;i++)
        {
            if (n%i == 0)
            {
                Sum += i;
            }
        }
 
        for (i = 1; i < Sum; i++)
        {
            if (Sum%i == 0)
            {
                tmpSum += i;
            }
        }
        if (n == tmpSum && isChet == true)
        {
            /* code */
            isChet = false;
            continue;
        }

        if (n == tmpSum && isChet == false && Sum <= b)
        {
            if (n != Sum)
            {
                /* code */
                cout << "(" << n << "," << Sum << ") ";
                isChet = true;
                isEST = true;
            }
        }
        
    }
    if (isEST == false)
    {
        /* code */
        cout << 0 << endl;

    }
    
    return 0;
}