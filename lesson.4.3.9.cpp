#include<iostream>
using namespace std;

bool isSimple(int x)
{
    
    if (x < 2 || x == 4)
    {
        /* code */
        return  false;
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
    int chislo;
    bool flag;
    flag = true;
    if (isSimple(x))
    {
        /* code */    
        while (x != 0 && flag)
        {
            /* code */
            if (x > 9)
            {
                chislo = x / 10;
            }
            else
                chislo = x;

            if (isSimple(chislo))
                flag = true;
            else
                flag = false;
                x /= 10;
        }
    }
    else
        flag = false;

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