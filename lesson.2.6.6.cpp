#include<iostream>
using namespace std;

int main()
{
    int a, b, count;
    cin >> a >> b;
    count = 0;
    while (1)
    {
        
        if (a == 0 || b == 0) 
        {
            /* code */
            if (a == 0)
            {
                /* code */
                cout << b << " " << count << endl;
                return 0;
            }
            else{
                cout << a << " " << count << endl;
                return 0;
        
            }
            
         }
        
        
        if (a <= b || b < a)
        {
            /* code */
            if (a <= b)
            {
                /* code */

                b = b - a;
            }
            else{
                a = a - b;
            }
            count++;
        }
        
        if (a < 0 || b < 0)
        {
            /* code */
            return 0;
        }
        
    }
    
    return 0;
}