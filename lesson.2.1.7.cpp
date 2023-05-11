#include<iostream>
using namespace std;

int main(){
    int a, b, c;

    cin >> a >> b >> c;

    int raz_druzei = (a - c) + (b - c);

    cout << raz_druzei << endl;

    return 0;
}