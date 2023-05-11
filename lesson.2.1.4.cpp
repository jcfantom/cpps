#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int destysyach;
    int trio, hvost;

    destysyach = a / 10000;
    trio = (a - destysyach*10000) / 10;
    hvost= (a - destysyach*10000) % 10;
    // cout << destysyach << endl;
    // cout << trio <<  endl;
    // cout << hvost << endl;

    int sum;
    sum = (hvost * 10000) + (trio * 10) + destysyach;
    cout << sum << endl;


    return 0;
}