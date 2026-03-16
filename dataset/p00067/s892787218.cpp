#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define INF_M 2147483647
#define pb(a) push_back(a)
using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;


char m[12][12];
void dfs(int i, int j) {
    // printf("%d %d\n",i,j);
    m[i][j] = '0';
    if(i < 11 && m[i+1][j] == '1') dfs(i+1,j);
    if(i > 0 && m[i-1][j] == '1') dfs(i-1,j);
    if(j < 11 && m[i][j+1] == '1') dfs(i,j+1);
    if(j > 0 && m[i][j-1] == '1') dfs(i,j-1);
}
 
int main() {
    string s;
    while(cin >> s) {
        if(!s.empty()){
            rep(i,0,12) m[0][i] = s.c_str()[i];
            rep(i,1,12) {
                cin >> s;
                rep(j,0,12) m[i][j] = s.c_str()[j];
            }

            int ans = 0;
            rep(i,0,12) {
                rep(j,0,12) {
                    if(m[i][j] == '1') {
                        ans++;
                        dfs(i,j);
                    }
                }
            }

            cout << ans << endl;
        }
    }
    return 0;
}