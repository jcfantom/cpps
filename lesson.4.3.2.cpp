#include <iostream>
#include<cmath>
using namespace std;

int sro(int Ich, int IIch, int IIIch, int IVch)
{
    float sum;
    sum = Ich + IIch + IIIch + IVch;
    sum *= 1.0;
    sum /= 4;

    return round(sum);
}
int main() {
    // put your code here
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int rez;
    if (a > 5 || b > 5 || c > 5 || d > 5 || a < 2 || b < 2 || c < 2 || d < 2) 
    {
        /* code */
        cout <<"Диапазон оценок от 2 до 5" << endl;
        return 1;
    }
    
    
    rez = sro(a, b, c, d);
    cout << rez << endl;
    return 0;
}