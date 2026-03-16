#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; cin >> num;
    for(int k = 0; k < num; k++) {
        string s1, s2, ret;
        vector<int> v1, v2;
        cin >> s1 >> s2;
        if(s2.length() > s1.length()) swap(s1,s2);

        for(int i=0; i<s1.length(); i++) v1.push_back((int)s1[i] - 48);
        for(int i=0; i<s2.length(); i++) v2.push_back((int)s2[i] - 48);
        reverse(v1.begin(), v1.end());
        reverse(v2.begin(), v2.end());

        int n = 0;
        for(int i=0; i<v2.size(); i++) {
            ret += to_string((v1[i] + v2[i] + n) % 10);
            if(v1[i] + v2[i] + n >= 10) n = 1;
            else n = 0;
        }
        for(int i=v2.size(); i<v1.size(); i++) {
            ret += to_string((v1[i] + n) % 10);
            if(v1[i] + n >= 10) n = 1;
            else n = 0;
        }

        if(v1.size() == v2.size() && v1[v1.size() - 1] + v2[v2.size() - 1] + n >= 10) ret += "1";
        else if(v1[v1.size() - 1] + n == 10) ret += "1";

        reverse(ret.begin(), ret.end());
        if(ret.length() > 80) cout << "overflow" << endl;
        else cout << ret << endl;
    }
    return 0;
}