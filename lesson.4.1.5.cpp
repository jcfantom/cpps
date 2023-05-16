#include <iostream>
using namespace std;
float power(float a, int b)
{
    float temp;
    temp = a;
    
    if (b == 0)
    {
        /* code */
        return 1;
    }
    
    
    b--;

    while (b != 0)
    {
        /* code */
        temp *= a;
        b--;

    }

    return temp;
    
}


int main() {
    // put your code here
    float a;
    int b;
    cin >> a >> b;

    cout << power(a, b) << endl;
    return 0;
}