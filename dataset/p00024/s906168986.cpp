
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main(void) {
    double speed;
    while(cin >> speed) {
        double y = (speed / 2.0) * (speed / 9.8);
        double n = (y + 5) / 5.0;
        cout << ceil(n) << endl;
    }
    return(0);
}