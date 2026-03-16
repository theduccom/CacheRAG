#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int MAXN = 50100;

bool p[MAXN];

int main()
{
    p[0] = p[1] = 1;
    REP(MAXN)if(!p[i])for(int j = i*2;j<MAXN;j+= i) p[j] = 1;

    int n;
    while(cin >> n && n)
    {
        int ans = 0;
        for(int i = 2;i <= n/2 ;i++) ans += (!p[i]) &(!p[n - i]);

        cout << ans << endl;
    }

    return 0;
}