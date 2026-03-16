#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        double x1, y1, r1, x2, y2, r2, d;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        d = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
        
        if (r1 - r2 > d) {
            cout << 2 << endl;
        }
        else if (r2 - r1 > d){
            cout << -2 << endl;
        }
        else if (r1 + r2 < d) {
            cout << 0 << endl;
        }
        else {
            cout << 1 << endl;
        }
    }

    return 0;
}