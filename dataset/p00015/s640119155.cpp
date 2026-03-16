#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
using namespace std;

int main(void) {
    
    
    int num; cin >> num;
    int k = 0;
    for(int r = 0; r < num; r++) {
        vector<int> vec;
        string a, b; cin >> a >> b;
        if(a.size() > 80 || b.size() > 80) {
            cout << "overflow" << endl; continue;
        }
        
        for(int r = 0; r < 82; r++) {
            if(r >= a.size() && r >= b.size() && k != 1) break;
            int c = k;
            k = 0;
            if(r < a.size()) c += a[a.size() - 1 - r] - '0';
            if(r < b.size()) c += b[b.size() - 1 - r] - '0';
            if(c > 9) k = 1;
            vec.push_back(c % 10);
        }
        if(vec.size() > 80) {
            cout << "overflow" << endl;
            continue;
        }
        for(int r = (int)vec.size() - 1; r >= 0; r--) cout << vec[r];
        cout << endl;
    }
    return(0);
}