#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b)
    {
        /* code */
        if (a == c)
        {
            /* code */
            cout << 3 << endl;
        }
        else{
            cout << 2 << endl;
        }
        
    }
    else{
        if (a == c)
        {
            /* code */
            cout << 2 << endl;
        }
        else{
            if (c == b)
            {
                /* code */
                cout << 2 << endl;
            }
            else{
                cout << 0 << endl;
            }
            
        }
        
    }
    
    return 0;
}