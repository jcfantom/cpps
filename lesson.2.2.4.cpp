#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int ost, tseloe;
    tseloe = a / 100;
    ost = a % 100;
    if (tseloe > 0)
    {
        /* code */
        cout << 3 << endl;
    }
    else{
        tseloe = ost / 10;
        ost = ost % 10;
        if (tseloe > 0)
        {
            /* code */
            cout << 2 << endl;
        }
        else{
            cout << 1 << endl;
        }
        
    }
    
    return 0;
}