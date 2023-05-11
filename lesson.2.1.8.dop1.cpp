#include<iostream>
using namespace std;

int main(){
    int x, n, t;
    cin >> x >> n >> t;
    int ost;
    ost = n - x;
    int otvet;

    if ((ost*t) <= 240)
    {
        /* code */
        otvet = n;
    }
    else{
        while ((ost * t) > 240)
        {
            /* code */
            ost -= 1;
        }
        otvet = x + ost;
    }
    
    cout << otvet << endl;
    return 0;
}