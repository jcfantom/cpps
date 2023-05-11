#include<iostream>
using namespace std;

int main()
{
    int vvod, stepen, dupl;
    cin >> vvod;
    dupl = vvod;
    stepen = 0;

    while (dupl > 0)
    {
        /* code */
        stepen ++;
        dupl /= 10;
    }
    stepen --;

    int temp, zapomnim, perem;
    dupl = vvod;
    perem = vvod;
    zapomnim = 0;
    for (int i = 0; i <= stepen; i++)
    {
        /* code */
        dupl /= 10;
        temp = perem - dupl *10;
        perem = dupl;
        cout << temp << " ";
        zapomnim += temp * (i * 10);
    }
    
    return 0;
}