#include<iostream>
using namespace std;

bool isSimple(int x)
{
    if (x < 2 || x == 4)
    {
        /* code */
        return false;
    }

    for (int i = 2; i < x / 2; i++)
    {
        /* code */
        if (x % i == 0)
        {
            /* code */
            return false;
        }
        
    }
    
    return true;
    
}

bool drobim_chislo(int x)
{
    int chislo, ost;
    bool flag;
    flag = true;

    while (x != 0 && flag)
    {
        /* code */
        chislo = x / 10;    
        ost = x % 10;
        if (isSimple(ost) && isSimple(x))
            flag = true;
        else
            flag = false;
        x /= 10;
        
    }
    return flag;
}
int main()
{
    int vvod;
    cin >> vvod;
    if (drobim_chislo(vvod))
        cout << "YES" << endl;
    
    else
        cout << "NO" << endl;

    return 0;
}