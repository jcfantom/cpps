#include<iostream>
using namespace std;

int main(){
    int x1,x2,y1,y2;
    cin >> x1 >> x2 >> y1 >> y2;
    if ( ((x1 - y1 == 1 || y1 - x1 == 1) || x1-y1 == 0) && ((x2 - y2 == 1 || y2 - x2 == 1) || x2 - y2 == 0) ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}