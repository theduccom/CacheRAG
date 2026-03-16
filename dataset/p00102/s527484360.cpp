#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <utility>
#include <stack>
#include <functional>
#include <queue>
#include <cmath>
#include <set>

#define rep(i,j,k) for(int i=j;i<k;i++)
#define drep(n,m) for(int i=0;i<n;i++)for(int j=0;j<m;j++)
#define Sort(x) sort((x).begin(),(x).end())
#define fi first
#define se second
#define vi vector<int>
#define INF 1000000000
#define MOD 1000000009
#define pb push_back
#define mp make_pair
typedef long long ll;
typedef unsigned long long ull;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};

using namespace std;

int main() {
    int n;
    while(1){
        cin>>n;
        if(n==0)return 0;
        vector<vector<int>> v(n+1,vector<int>(n+1,0));
        
        rep(i,0,n){
            int sum=0;
            rep(j,0,n){
                cin>>v[i][j];
                sum+=v[i][j];
            }
            v[i][n]=sum;
        }
        
        rep(j,0,n+1){
            int sum=0;
            rep(i,0,n){
                sum+=v[i][j];
            }
            v[n][j]=sum;
        }
        
        rep(i,0,n+1){
            rep(j,0,n+1){
                if(j==0)printf("%5d",v[i][j]);
                else printf("%5d",v[i][j]);
            }
            cout<<endl;
        }
        
        
    }
    return 0;
}


