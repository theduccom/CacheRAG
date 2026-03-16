#define _USE_MATH_DEFINES
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

    int a, b, c;
    while(cin >> a >> b >> c && (a || b || c) ) {
        int r = min( min(a * a + b * b, a * a + c * c), b * b + c * c);
        int n;
        cin >> n;
        for(int i = 0; i < n; i++) {
            int d;
            cin >> d;
            if ( r >= d * d * 4 ) {
                cout << "NA" << endl;
            } else {
                cout << "OK" << endl;
            }
        }
    }
     
    return 0;
}