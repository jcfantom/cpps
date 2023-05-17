#include<iostream>
using namespace std;

bool chilling(int day){
    if (day >= 6)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    string happy, furry;
    happy = ":-)";
    furry = ":-(";
    if (chilling(a))
    {
        /* code */
        cout << happy << endl;
    }
    else
    {
        cout << furry << endl;
    }

    if (chilling(b))
    {
        /* code */
        cout << happy << endl;
    }
    else
    {
        cout << furry << endl;
    }

    if (chilling(c))
    {
        /* code */
        cout << happy << endl;
    }
    else
    {
        cout << furry << endl;
    }

    
}