#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int Sum;
    int tmpSum;
    bool isChet;
    isChet = false;
    int a, b, n;
    int i;
    cout << "Введите нижний предел: ";
    cin >> a;
    cout << "Введите верхний предел: ";
    cin >> b;
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

        if (n == tmpSum && isChet == false)
        {
            if (n != Sum)
            {
                /* code */
                cout << "(" << n << ", " << Sum << ") ";
                isChet = true;
            }
        }
        
    }
    if (Sum > 0 && n > 0 && tmpSum > 0 && n != tmpSum) 
    {
        /* code */
        cout << 0 << endl;
    }
    

    return 0;
}