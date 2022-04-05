#include<bits/stdc++.h>


using namespace std;

int main()
{
   string name;
   double salary, sale;
   
   cin >> name >> salary >> sale;
   
   cout << fixed << showpoint << setprecision(2) << "TOTAL = R$ " << salary + ((sale / 10) * 1.5) << endl;

    return 0;
}