#include<iostream>
using namespace std;


int main(){

    int vvod, sum, kolvo, sr_o;
    sum = 0;
    kolvo = 0;
    sr_o = 0;
    cin >> vvod;
    while (vvod !=0)
    {
        /* code */
        kolvo++;
        sum += vvod;
        cin >> vvod;
    }
    
    sr_o = sum / kolvo;
    cout << sr_o << endl;
    return 0;
}