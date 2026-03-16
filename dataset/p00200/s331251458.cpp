#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<string>
#include<cmath>
#include<cstring>
#include<queue>
#include<map>
#include<climits>
#include<queue>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
using namespace std;
typedef pair<int, int> P;
typedef long long int ll;
typedef pair<ll,ll> LLP;
int dx[4] = {1,0,0,-1};
int dy[4] = {0,1,-1,0};
#define INF 1000000007
#define MOD 1000000007
#define ARRAY_MAX 105


void warshal_floyd(vector<vector<int> >& dp){
    REP(k,ARRAY_MAX){
        REP(i,ARRAY_MAX){
            REP(j,ARRAY_MAX){
                dp[i][j] = min(dp[i][j],dp[i][k] + dp[k][j]);
            }
        }
    }
}


int main(){

    int n,m;
    while(cin >> n >> m,n){

        int a,b,c,t;
        vector<vector<int> > mini_cost(ARRAY_MAX,vector<int>(ARRAY_MAX));
        vector<vector<int> > mini_time(ARRAY_MAX,vector<int>(ARRAY_MAX));

        REP(i,ARRAY_MAX){
            REP(j,ARRAY_MAX){
                mini_cost[i][j] = mini_time[i][j] = INF;
                if(i == j){
                    mini_cost[i][j] = mini_time[i][j] = 0;
                }
            }
        }


        REP(i,n){
            cin >> a >> b >> c >> t;
            a--;
            b--;
            mini_cost[a][b] = mini_cost[b][a] = c;
            mini_time[a][b] = mini_time[b][a] = t;
        }

        warshal_floyd(mini_time);//最小コスト
        warshal_floyd(mini_cost);//最小時間

        int k;
        cin >> k;
        REP(i,k){
            int p,q,r;
            cin >> p >> q >> r;
            p--;
            q--;
            if(r == 0){
                //最小コスト
                cout << mini_cost[p][q] << endl;
            }else{
                cout << mini_time[p][q] << endl;
            }
        }
        mini_cost.shrink_to_fit();
        mini_time.shrink_to_fit();
    }


    return 0;
}

