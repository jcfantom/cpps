#include<iostream>
using namespace std;


bool Election(int x, int y, int z)
{
    if (x == y || x == z)
    {
        /* code */
        return x;
    }

    if (y == z )
    {
        /* code */
        return y;
    }
    else
    {
        return z;
    }
    
    
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << Election(a, b, c) << endl;
    return 0;
}