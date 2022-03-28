#include <iostream>

using namespace std;

int main()
{
    float coef[3];
    float interval[2];
    float base = 0.1 ;
    float x, y, area, totalarea;
    
    cin >> coef[0] >> coef[1] >> coef[2];
    cin >> interval[0] >> interval[1];

    x = interval[0];
    totalarea = 0;

    while(x < interval[1])
    {
        y = coef[0] * x * x + coef[1] * x + coef[2];
        area = base * y;
        totalarea += area;
        x += base;
    }

    cout << totalarea << endl;
    

    
    return 0;
}