#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
#include <cmath>
using namespace std;

#define REP(i,n) for(int (i)=0; (i)<(n); (i)++)
#define For(i,a,b) for(int (i)=(a); (i)<(b); (i)++)

int weights[] = {512, 256, 128, 64, 32, 16, 8, 4, 2, 1};

int main() {
    int n;
    while(cin >> n) {
        vector<int> needed;
        REP(i,10) {
            if (n / weights[i]) {
                needed.push_back(weights[i]);
                n %= weights[i];
            }
        }
        reverse(needed.begin(), needed.end());
        REP(i,needed.size()-1) {
            cout << needed[i] << " ";
        }
        cout << needed[needed.size()-1] << endl;
    }
    return 0;
}