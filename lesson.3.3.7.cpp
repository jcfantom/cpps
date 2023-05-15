#include<iostream>
using namespace std;

int main()
{
    int vvod, count;
    cin >> vvod;
    count = 1;
    while (vvod != 0)
    {
        /* code */
        if (count % 2 == 0)
        {
            /* code */
            cout << count << " ";
            vvod--;
        }
        count++;
        
    }
    
    return 0;
}