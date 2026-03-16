#include <bits/stdc++.h>
using namespace std;

int main(void) {
    map<string, vector<int>> hm;
    
    string name; int page;
    while(cin >> name >> page) {
        hm[name].push_back(page);
        //cout << "hm[" << name << "] = " << hm[name] << endl;
    }
    for(auto ite = hm.begin(); ite != hm.end(); ite++) {
        cout << ite->first << endl;
        sort(ite->second.begin(), ite->second.end());
        for(int r = 0; r < ite->second.size(); r++) {
            cout << ite->second[r];
            if(r == ite->second.size()-1) putchar('\n');
            else putchar(' ');
        }
    }
    return(0);
}