#include<iostream>
using namespace std;

int main()
{
    int a, n, b;
    cin >> a >> n;
    n--;
    b = a;
    while (n > 0)
    {
        /* code */
        a *= b;
        n--;
    }

    cout << a << endl;
    
    return 0;
}