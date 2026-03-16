#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for( int i = 0; i < n; i++ )
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define INF 2000000000
#define mod 1000000007
#define INF2 1000000000000000000

vector<pair<string,int>> str(100000);
int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int count = 0;
    int c_n = 0;
    while (cin >> str[count].first) {
        cin >> str[count].second;
        count++;
    }
    sort(str.begin(), str.begin() + count);
    cout << str[0].first << endl;
    cout << str[0].second;
    for (int i = 1; i < count; i++) {
        if (str[i].first != str[i-1].first) {
            cout << endl << str[i].first << endl;
            cout << str[i].second;           
        } else {
            cout << " " << str[i].second;
        }
    }
    cout << endl;
    return 0;
}