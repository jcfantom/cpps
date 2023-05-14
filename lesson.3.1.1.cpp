#include<iostream>
using namespace std;

int main()
{
    
    int vvod, i, b;
    i = 1;
    b = 2;
    cin >> vvod;
    for (i; i <= vvod; i++)
    {
        /* code */
        if (i == 1)
        {
            /* code */
            cout << b << " ";
        }
        else
        {
            b *= 2;
            cout << b << " ";
        }
    }
    return 0;
}