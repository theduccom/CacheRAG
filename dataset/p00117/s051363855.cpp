// a Reard For a Carpenter
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0117&lang=jp
//
//
#include <iostream>
#include <cstdio>
using namespace std;

int n, m, a, b, c, d, ans=0, s, g, V, P;
int Cost[32][32]={};
const int inf = 1001001001;

void show(){
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j){
            if(Cost[i][j] == inf) cout << "INF ";
            else cout << Cost[i][j] << " ";
    
            if(j == n) cout << endl;
    } 
}

void solve(){
    for(int k = 1; k <= n; ++k)
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
                Cost[i][j] = min(Cost[i][j],Cost[i][k] + Cost[k][j]);
    // show();

    cout << V - P - Cost[s][g] - Cost[g][s] << endl;
}

int main(){
    scanf("%d%d",&n,&m);

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j) Cost[i][j] = inf;

    for(int i = 0; i < m; ++i){
        scanf("%d,%d,%d,%d",&a,&b,&c,&d);
        // cerr << "(a, b, c, d) = (" << a << ", " << b << ", " << c << ", " << d << ")" << endl;
        Cost[a][b] = c;
        Cost[b][a] = d;
    }
    scanf("%d,%d,%d,%d", &s, &g, &V, &P);
    // cerr << "(s,g,V,P) = (" << s << ", " << g << ", " << V << ", " << P  << ")" << endl;

    // show();

    solve();
}
