#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    double x, h;
    while(1){
        cin >> x >> h;
        if(x == 0 && h == 0){
            break;
        }
        cout << fixed << (x * sqrt(x * x / 4 + h * h) / 2) * 4 + x * x << endl;
    }

    return 0;
}