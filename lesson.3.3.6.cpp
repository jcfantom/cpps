#include<iostream>
using namespace std;

int main()
{
    int a, b, otvet;
    cin >> a >> b;
    otvet = 0;
    for (int i = a; i <= b; i++)
    {
        /* code */
        if (i % 7 == 5)
        {
            /* code */
            otvet++;
        }
    }

    cout << otvet << endl;
    return 0;
    
}