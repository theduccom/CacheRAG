#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double gets(double x, double h){
    return 2 * x * sqrt( x * x / 4 + h * h) + x * x;
}

int main(){
    int x, h;
    cout << fixed << setprecision(10);
    while(true){
        cin >> x;
        cin >> h;
        if(x == 0 && h == 0) break;
        cout << gets(x, h) << endl;
    }
}