#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;

float search_otrez(int x1, int y1, int x2, int y2)
{
    float r;
    r = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    return r;
}
int main() {
    
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    float otrez1, otrez2, otrez3;
    otrez1 = search_otrez(x1, y1, x2, y2);
    otrez2 = search_otrez(x1, y1, x3, y3);
    otrez3 = search_otrez(x2, y2, x3, y3);
    cout << fixed <<setprecision(6) << (otrez1 + otrez2 + otrez3)<< endl;
    return 0;
}