#include<iostream>
using namespace std;

int main(){
    int vvod, last;
    last = 0;
    cin >> vvod;
    while (vvod != 0)
    {
        /* code */

        last +=vvod % 10;
        vvod /= 10;
    }
    cout << last;
    
    return 0;
}