#include<iostream>
using namespace std;

int main()
{
    int vvod, a;
    cin >> vvod;
    a = 1;

    for (int i = 1; i <= vvod; i++)
    {
        /* code */
        a = (a*i);
    }
    cout << a << endl;
    

    return 0;
}