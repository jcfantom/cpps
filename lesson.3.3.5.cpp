#include<iostream>
using namespace std;

int main()
{
    int a, b, otvet;
    cin >> a >> b;
    otvet = 0;
    for (int i = a; i <= b; i++)
    {
        /* code */
        otvet += i * i;
    }
    cout << otvet << endl;
    return 0;
}