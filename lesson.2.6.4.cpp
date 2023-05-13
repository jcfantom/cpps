#include<iostream>
using namespace std;

int main()
{
    int vvod, st;
    cin >> vvod;
    int _const = 2;
    int _est = 0;
    while (vvod > 0)
    {
        /* code */
        if (vvod % 2 == 0)
        {
            /* code */
            st = vvod - 1;
            int ms = 2;
            while (st > 0)
            {
                /* code */
                ms *= _const;
                st--;

            }
            cout <<  ms << " ";   
            _est++;         
        }
        vvod--;
        
    }

    if (_est == 0)
    {
        /* code */
        cout << 0 << endl;
    }
    
    
    return 0;
}