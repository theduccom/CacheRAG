#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main() {
    while (true) {
        int n;
        cin >> n;
        
        if (n==0) {
            break;
        }
        
        vector<P> l;
        
        for (int i=0; i<n; i++) {
            int pi, d1i, d2i;
            cin >> pi >> d1i >> d2i;
            l.push_back(P(d1i+d2i, pi));
        }
        
        sort(l.begin(), l.end());
        
        cout << l[n-1].second << " " << l[n-1].first << endl;
    }
}
