#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int sotnya;
    sotnya = a / 100;
    int des;
    des = (a - (sotnya * 100)) / 10;
    int ed;
    ed = a - (sotnya * 100) - (des * 10);
    cout << sotnya << endl;
    cout << des << endl;
    cout << ed << endl;

    return 0;
}