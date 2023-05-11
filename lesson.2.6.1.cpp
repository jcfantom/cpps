#include<iostream>
using namespace std;

int main()
{
    int vvod, sum;
    cin >> vvod;
    sum = 0;
    while (vvod !=0)
    {
        /* code */
        sum += vvod;
        vvod--;
    }
    
    cout << sum << endl;
}