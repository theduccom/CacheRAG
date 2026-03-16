#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <string>
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef vector<ll> vll;
typedef pair<int,int> pint;
typedef pair<ll,ll> pll;
#define range(i,a,b) for(int i=a;i<b;++i)
#define rep(i,n) range(i,0,n)
const ll INF=1e10;
#define PI 3.141592
#define pb push_back

void show(vector<vll> a){
    range(i,1,a.size()){
        range(j,1,a[i].size()){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n,m; cin >> n >> m;
    char ch;
    vint a(m),b(m),c(m),d(m);
    vector<vll> K(n+1,vll(n+1,INF));
    rep(i,m){
        int a,b; cin >> a >> ch >> b >> ch;
        cin >> K[a][b] >> ch >> K[b][a];
    }
    int s,g,v,p; cin >> s >> ch >> g >> ch >>  v >> ch >> p;

    range(k,1,n+1) range(i,1,n+1) range(j,1,n+1){
        if(K[i][j]>K[i][k]+K[k][j]){
            K[i][j]=K[i][k]+K[k][j];
        }
    }
    cout << v-p-K[s][g]-K[g][s] << endl;
}
