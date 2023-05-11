#include<iostream>
using namespace std;

int main()
{

    int vvod, last, ch;
    cin >> vvod;
    ch = 0;
    while (vvod > 0)
    {
        /* code */
        last = vvod % 10;
        vvod /= 10;
        if (last % 2 == 0)
        {
            /* code */
            ch++;
        }
        


    }
    cout << ch << endl;
    return 0;
}