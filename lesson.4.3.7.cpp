#include <iostream>


bool if_druge(int x, int b)
{
    int sum;
    sum = 1;
    bool flag_x, flag_b;

    flag_x = false;
    flag_b = false;
    for (int i = 2; i < x; i++)
    {
        if (sum == b)
        {
            /* code */
            flag_x = true;
            continue;
        }
        if (sum > b)
        {
            /* code */
            flag_x = false;
            continue;
        }
        
        /* code */
        if ( x % i == 0)
        {
            /* code */
            sum += i;
        }
    }

void find_druzhe(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        /* code */

    }
    
}
int main() {
    int a, b;
    cin >> a >> b;

    return 0;
}