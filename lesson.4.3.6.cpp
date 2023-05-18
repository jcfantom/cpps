#include<iostream>
using namespace std;

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
    sum = 1;
    for (int i = 2; i < b; i++)
    {
        if (sum == x)
        {
            /* code */
            flag_b = true;
            continue;
        }
        if (sum > x)
        {
            /* code */
            flag_b = false;
            continue;
        }
        
        /* code */
        if (b % i == 0)
        {
            /* code */
            sum += i;
        }

     
    }

    if (flag_x && flag_b)
    {
        /* code */
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    
}

int main()
{
    int a, b;
    cin >> a >> b;
    if_druge(a, b);
    return 0;
}