#include<iostream>
#include<string>
#include<algorithm>	
#include<cmath>
#include<map>
#include<vector>
#define int long long
using namespace std;
int test[51];
signed main() {
    int n; string s;
    while (cin >> s) {
        for (int h = 0; h < s.size(); h++) {
            if (s[h] == '@') {
                for (int i = 0; i < s[h + 1] - '0'; i++) {
                    cout << s[h + 2];
                }
                h += 2;
            }
            else {
                cout << s[h];
            }
        }
        cout << endl;
    }
}
