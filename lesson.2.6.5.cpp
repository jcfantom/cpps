#include<iostream>
using namespace std;

int main()
{
    int vvod;
    cin >> vvod;
    int hvost, pred, count;
    count = 0;
    while (vvod > 0)
    {
        /* code */
        count++;
        hvost = vvod % 10;
        vvod /= 10;
        if (count == 1)
        {
            /* code */
            pred = hvost;
        }
        else{

            if (hvost != pred)
            {
                /* code */
                cout << "NO" << endl;
                return 0;
            }            
        }      
    }

    cout << "YES" << endl;
    
    return 0;
}
