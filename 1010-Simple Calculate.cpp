#include<bits/stdc++.h>


using namespace std;
 
int main() {
 
    int a1, b1, a2, b2;
    double c1, c2;
    
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    
    cout << fixed << showpoint << setprecision(2) << "VALOR A PAGAR: R$ " << (c1 * b1) + (c2 * b2) << endl;
 
    return 0;
}