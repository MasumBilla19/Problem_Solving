#include<bits/stdc++.h>

#define PI 3.14159

using namespace std;
 
int main() {
 
    long long int r;
    cin >> r;
    
    cout << fixed << showpoint << setprecision(3) << "VOLUME = " << (4 / 3.0) * PI * (r * r * r) << endl;
 
    return 0;
}