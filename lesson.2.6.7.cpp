#include<iostream>
using namespace std;

int main()
{
    int vvod, a, b;
    cin >> vvod;
    a = 1;
    b = 1;
    vvod -= 2;
    cout << a << " " << b << " ";
    while (vvod != 0)
    {
        /* code */
        if (a <= b)
        {
            /* code */
            a = a +b;
            cout << a << " ";
        }
        else
        {
            b = b + a;
            cout << b << " ";
        }
        
        vvod--;
    }
    
    return 0;
}