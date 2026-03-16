#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<stack>
#include<queue>
#include<deque>
using namespace std;

int main() {

    double x, h;
    while(cin >> x >> h && (x || h) ) {
        printf("%.6f", x * sqrt(x * x + 4 * h * h) + x * x);
        cout << endl;
    }
     
    return 0;
}