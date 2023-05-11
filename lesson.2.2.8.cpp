#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    
    if ((a + b) > c)
    {
        /* code */
        if ((a + c) > b)
        {
            /* code */
            if ((b + c) > a)
            {
                /* code */
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
            
        }
        
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;

}