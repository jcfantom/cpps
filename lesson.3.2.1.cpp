#include<iostream>
using namespace std;

int main()
{
    int ost, vsego;
    vsego = 0;
    for (int i = 100; i <= 999; i++)
    {
        /* code */
        ost = i % 10;
        if (ost == 3)
        {
            /* code */
            vsego++;
        }
        else{
            if (ost % 2 == 0)
            {
                /* code */
                vsego++;
            }
            
        }
    }
    cout << vsego << endl;
    return 0;
}