#include <iostream>
using namespace std;

int nod(int a, int b)
{
    while((a + b) != a && (a +b) != b)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    if (a==0) 
        return b;
    else
        return a;
    

}

int main() {
    // put your code here
    int count;
    int temp;
    int a, b;
    cin >> count;
    temp = 0;
    while (count != 0)
    {
        /* code */
        if (count == 1 && temp == 0)
        {
            /* code */
            cin >> a;
            temp = nod(a, 0);
            count--;
        }
        
        if (count== 1 && temp > 0)
        {
            cin >> a;
            temp = nod(a, temp);
            count--;
        }

        
        if (count > 1 && temp == 0)
        {
            /* code */
            cin >> a >> b;            
            temp = nod(a, b);
            count -=2;

        }
        if(count > 1 && temp > 0)
        {
            cin >> a;
            temp = nod(a, temp);
            count--;
        }
        
        
    }
    
    cout << temp << endl;

    return 0;
}