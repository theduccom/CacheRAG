#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    int n, i;
    long long int p, q;
    map<int, long long int> emp;
    vector<int> seq;
    while(cin >> n && n) {
        bool isExist = false;
        emp.clear();
        seq.clear();
        rep(l, n) {
            cin >> i >> p >> q;
            if(!emp[i]) seq.push_back(i);
            emp[i]+=p*q;
        }
        rep(i, seq.size()) {
            if(emp[seq[i]] >= 1000000) {
                cout << seq[i] << endl;
                isExist = true;
            }
        }
        if(!isExist) cout << "NA" << endl;
    }
}