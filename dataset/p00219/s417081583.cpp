#include <bits/stdc++.h>
using namespace std;

int main() {
    while (true) {
        int n;
        cin >> n;
        
        if (n==0) {
            break;
        }
        
        map<int, int> mp;
        
        for (int i=0; i<10; i++) {
            mp[i] = 0;
        }
        
        for (int i=0; i<n; i++) {
            int ci;
            cin >> ci;
            mp[ci] += 1;
        }
        
        for (int i=0; i<10; i++) {
            if (mp[i]==0) {
                cout << '-' << endl;
            }
            else {
                for (int j=0; j<mp[i]; j++) {
                    cout << "*";
                }
                
                cout << endl;
            }
        }
    }
}
