#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b)
    {
        /* code */
        if (a >= c)
        {
            /* code */
            cout << a << endl;
        }
        else{
            cout << c << endl;
        }
    }
    else{
        if (b >= c)
        {
            /* code */
            cout << b << endl;
        }
        else{
            cout << c << endl;
        }
        
    }
    

    return 0;
}