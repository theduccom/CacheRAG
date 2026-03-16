#include <iostream>
#include <string>
using namespace std;
int main()
{
    int dic[26];
    for (int i=0; i<26; ++i) dic[i] = 0;
    dic['I'-'A'] = 1;
    dic['V'-'A'] = 5;
    dic['X'-'A'] = 10;
    dic['L'-'A'] = 50;
    dic['C'-'A'] = 100;
    dic['D'-'A'] = 500;
    dic['M'-'A'] = 1000;
    string s;
    while (cin >> s) {
        int res = 0;
        for (int i=0; i<s.size()-1; ++i) {
            if (dic[s[i+1]-'A'] > dic[s[i]-'A'])
                res -= dic[s[i]-'A'];
            else
                res += dic[s[i]-'A'];
        }
        res += dic[s[s.size()-1]-'A'];
        cout << res << endl;
    }
    return 0;
}