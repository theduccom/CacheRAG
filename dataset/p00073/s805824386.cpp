#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <functional>
#include <array>

using namespace std;

int main(){
    double x, h;
    while(true){
        cin >> x >> h;
        if(x == 0 && h == 0) break;
        cout << fixed;
        cout << x * x + x * 2 * sqrt(x * x / 4 + h * h) << endl;
    }
}
