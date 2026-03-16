#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <utility>
#include <set>
#include <cctype>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
using namespace std;
string s1, s2;
int main(void) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        vector<int> ans;
        cin >> s1;
        cin >> s2;
        int size1 = s1.size();
        int size2 = s2.size();
        if (size2 > size1) {
            swap(size1, size2);
            swap(s1, s2);
        }
        size1++;
        reverse(s1.begin(), s1.end()); reverse(s2.begin(), s2.end());
        s1 += "0";
        for (int i = 0; i + size2 < size1; i++) {
            s2 += "0";
        }
        //    cout << s1 << endl;
        //    cout << s2 << endl;
        int old = 0;
        for (int i = 0; i < size1; i++) {
            int tmp = (s1[i]-'0') + (s2[i]-'0') + old;
            //        cout << tmp << endl;
            ans.push_back(tmp % 10);
            old = tmp / 10;
        }
        if (ans[size1-1] == 0) size1--;
        if (size1 > 80) {
            cout << "overflow" << endl;
            continue;
        }
        for (int i = size1-1; i >= 0; i--) {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
} 