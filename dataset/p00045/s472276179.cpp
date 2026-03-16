#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
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
    int sum = 0, total = 0;
    int cnt = 0;
    while(cin >> s)
    {
        int a, b;
        for(int i = 0; i < s.size(); i++) if(s[i] == ',') a = stoi(s.substr(0, i)), b = stoi(s.substr(i + 1));
        sum += a * b;
        total += b;
        cnt++;
    }
    cout << sum << "\n" << (total + cnt - 1) / cnt << "\n";
    return 0;
}


