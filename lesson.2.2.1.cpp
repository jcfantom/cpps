#include<iostream>
using namespace std;

int main(){

    int x;
    cin >> x;
    if (x % 2 == 0)
    {
        /* code */
        cout << x + 2 << endl;
    }
    else{
        cout << x + 1 << endl;
    }
    
    return 0;
}