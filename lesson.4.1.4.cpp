#include<iostream>
using namespace std;
int nod(int a, int b)
{
    while((a + b) != a && (a +b) != b)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    if (a==0) 
        return b;
    else
        return a;
    

}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << int(x/nod(x, y)) << " " << int(y/nod(x, y));
    return 0;
}