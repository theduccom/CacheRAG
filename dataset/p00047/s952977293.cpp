#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <utility>
#include <cstring>
#include <iomanip>
#include <numeric>
#include <cmath>
#include <queue>
#include <map>
using namespace std;
typedef long long ll;
const int INF = 1<<30; 
const int MOD = 1e9 + 7;
const int dy[] = {1, 0, -1, 0};
const int dx[] = {0, 1, 0, -1};
int to_int(char ch)
{
    int res;
    if(ch == 'A') res = 0;
    if(ch == 'B') res = 1;
    if(ch == 'C') res = 2;
    return res;
}
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    string s;
    string t = "#??";
    while(cin >> s)
    {
        int a = to_int(s[0]);
        int b = to_int(s[2]);
        swap(t[a], t[b]);
    }
    if(t[0] == '#') cout << 'A' << "\n";
    else if(t[1] == '#') cout << 'B' << "\n";
    else cout << 'C' << "\n";
    return 0;
}


