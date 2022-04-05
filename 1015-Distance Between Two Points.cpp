#include<bits/stdc++.h>

using namespace std;

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    
    double x2_1 = x2 - x1;
    double y2_1 = y2 - y1;
    
    cout << fixed << showpoint << setprecision(4) << sqrt((x2_1 * x2_1) + (y2_1 * y2_1)) << endl;

    return 0;
}
