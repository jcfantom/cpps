#include<iostream>
using namespace std;

int main()
{
    int k, itog;
    cin >> k;
    for (int i = 2; i <= 30000; i++)
    {
        /* code */
        //cout << i << endl;
        itog = i * 2 + ((i - 2) * 2);
        if (itog == k)
        {
            /* code */
            cout << i << endl;
            cout << "YES" << endl;
            return 0;
        }
        
    }
    cout << "NO" << endl;
    return 0;
}