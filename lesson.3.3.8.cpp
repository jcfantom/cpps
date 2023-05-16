#include<iostream>
using namespace std;

int main()
{
    int sum1, sum2, perem, count;
    int temp1, temp2;
    int s1, s2;
    count = 0;
    for (int i = 100000; i <= 999999; i++)
    {
        /* code */
        sum1 = 0;
        sum2 = 0;
        
        perem = i;
        temp1 = perem % 1000;
        temp2 = perem / 1000;
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
            /* code */
            count++; 
        }
        
        
        

        
    }
    cout << count << endl;
    return 0;
}