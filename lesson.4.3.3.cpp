#include <iostream>
using namespace std;
int ret_sum(int x)
{
    int sum, i;
    sum = 0;
    while (x != 0)
    {
        /* code */
        i = x % 10;
        sum +=i;
        x /= 10;
    }
    
    return sum;
}

int main() 
{
    int vvod, b;
    cin >> vvod;
    for (int i = 1; i <= vvod; i++)
    {
        /* code */
        b = ret_sum(i);
        if (b == 5)
        {
            /* code */
            cout << i << " ";
        }
        
    }
    
    return 0;
}