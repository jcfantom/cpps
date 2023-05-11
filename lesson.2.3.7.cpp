#include<iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int sum = n * m;
    //2 2 3
    if (k < sum &&  (k % n == 0 || k % m == 0))
    {
        /* code */

        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}