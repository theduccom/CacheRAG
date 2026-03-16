#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin >> n) {
        vector<int> res;
        for(int i=0; i<10; ++i) {
            if(n & (1 << i)) {
                res.push_back(1 << i);
            }
        }
        for(int i=0; i<res.size(); ++i) {
            cout << res[i] << " \n"[i == res.size()-1] << flush;
        }
    }
}