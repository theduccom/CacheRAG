#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    string s;

    map<char, int> conv;
    conv['I'] =1;
    conv['V'] =5;
    conv['X'] =10;
    conv['L'] =50;
    conv['C'] =100;
    conv['D'] =500;
    conv['M'] =1000;

    while(cin >> s) {
        long ans = 0;
        for(int i=0; i<s.size()-1; i++) {
            if(conv[s[i]] < conv[s[i+1]])
                ans -= conv[s[i]];
            else
                ans += conv[s[i]];
        }
        ans += conv[s[s.size()-1]];
        cout << ans << endl;
    }

    return 0;
}