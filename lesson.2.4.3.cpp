#include<iostream>
using namespace std;

int main()
{
    int k, i, flag;    
    i = 0;
    flag = 0;
    cin >> k;
    while (k != 0)
    {
        if (k > 2 && flag == 0)
        {
            /* code */
            i ++;
        }
        else
        {
            flag = 1;
        }
        cin >> k;

    }

    cout << i << endl;
    
    return 0;
}