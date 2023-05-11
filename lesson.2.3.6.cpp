#include<iostream>
using namespace std;

int main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    
    int r_stb, r_str;
    r_stb = x1 - y1;
    r_str = x2 - y2;
    if (r_stb < 0)
    {
        /* code */
        r_stb *= -1;
    }

    if (r_str < 0)
    {
        /* code */
        r_str *= -1;
    }
    
    
    cout << r_stb << endl << r_str << endl;
    if (r_stb !=0 && r_stb <= 2 && r_str != 0 && r_str <= 2 && r_stb != r_str) 
    {
        /* code */
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}