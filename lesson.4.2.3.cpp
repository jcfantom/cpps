#include <iostream>
using namespace std;

bool happy(int x)
{
        int sum1, sum2;
        int temp1, temp2;
        int s1, s2;

        sum1 = 0;
        sum2 = 0;
        
        temp1 = x % 1000;
        temp2 = x / 1000;
        s1 = 0;
        s2 = 0;
        while (temp1 != 0)
        {
            /* code */
            s1 += temp1 % 10;
            temp1 /= 10;
        }
        while (temp2 != 0)
        {
            /* code */
            s2 += temp2 % 10;
            temp2 /= 10;
        }

        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
}

int main() 
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    happy(x1);
    happy(x2);
    happy(x3);
    return 0;
}