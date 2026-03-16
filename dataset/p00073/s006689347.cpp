#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long double x, h;
    while(cin >> x >> h, x || h){
        cout << fixed << x * x + sqrt((x / 2) * (x / 2) + h * h) * x * 2 << endl;
    }
}