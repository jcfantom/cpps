#include<iostream>
using namespace std;

int main()
{
    int k, i;
    cin >> k;
    i = 0;
    while (k != 0)
    {
        /* code */
        i += k;
        cin >> k;
    }

    cout << i << endl;
    
    return 0;
}