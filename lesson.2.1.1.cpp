#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout << a << b << endl;
    cout << "Введите две переменных через пробел" << endl;
    cin >> a >> b;
    int s = a + b;
    int r = a - b;
    int p = a * b;
    int z_d = a / b;
    int ost = a % b;
    float d = 1.0 * a / b;
    cout << "sum = " << s << endl;
    cout << "raznost = " << r << endl;
    cout << "proizvedenie = " << p << endl;
    cout << "zel_delenie = " << z_d << endl;
    cout << "ost = " << ost << endl;
    cout << "delenie = " << d << endl;

    return 0;
}