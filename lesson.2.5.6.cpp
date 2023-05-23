#include<iostream>
using namespace std;

int main()
{
    int vvod, kolvo, temp, itog, st, dop_nuli, des;
    cin >> vvod;
    kolvo = 0;
    itog = 0;
    
    temp = vvod;
    while (temp > 0)
    {
        /* code */
        temp /= 10;
        kolvo++;
    }

    temp = vvod;
    while (kolvo > 0)
    {
        /* code */
        st = temp % 10;
        temp /=10;
        dop_nuli = kolvo;
        dop_nuli --;
        des = 1;
        while(dop_nuli > 0)
        {
            des *= 10;
            dop_nuli--;
        }
        itog += st * des;

        kolvo--;

    }

    cout << itog << endl;
    
    
    return 0;
}