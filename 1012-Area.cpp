#include<bits/stdc++.h>

#define PI 3.14159

using namespace std;
 
int main() {
 
    float a, b, c;
    cin >> a >> b >> c;
    
    cout << fixed << showpoint << setprecision(3) << "TRIANGULO: " << 0.5 * a * c << endl;
    cout << fixed << showpoint << setprecision(3) << "CIRCULO: " << PI * (c * c) << endl;
    cout << fixed << showpoint << setprecision(3) << "TRAPEZIO: " << 0.5 * (a + b) * c << endl;
    cout << fixed << showpoint << setprecision(3) << "QUADRADO: " << b * b << endl;
    cout << fixed << showpoint << setprecision(3) << "RETANGULO: " << a * b << endl;
 
    return 0;
}