#include "bits/stdc++.h"
using namespace std;
 
int main() {
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;
 
    int sum = b1;
    sum += b2;
    sum += b3 * 2;
    if (sum >= 2) {
        cout << "Open" << endl;
    } else cout << "Close" << endl;
}
