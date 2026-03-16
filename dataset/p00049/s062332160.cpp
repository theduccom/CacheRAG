#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;
typedef long long ll;
const int INF = 1<<30; 
const int MOD = 1e9 + 7;
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    int a, b, ab, o;
    a = b = ab = o = 0;
    while(cin >> s)
    {
        string t;
        int idx = -1;
        for(int i = 0; i < s.size(); i++) if(s[i] == ',') { idx = i; break; }
        t = s.substr(idx + 1);
        if(t.size() == 2) ab++;
        else if(t == "A") a++;
        else if(t == "B") b++;
        else if(t == "O") o++;
    }
    cout << a << "\n" << b << "\n" << ab << "\n" << o << endl;
    return 0;
}


