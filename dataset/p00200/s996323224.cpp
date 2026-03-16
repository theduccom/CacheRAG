#include <iostream>
using namespace std;

signed main(){
    int m,n;
    static int fare[111][111], time[111][111];
    while(cin >> m >> n && m){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                fare[i][j] = time[i][j] = (i == j) ? 0 : 1e8;
            }
        }
        for(int i = 0; i < m; i++){
            int u, v, a, b;
            cin >> u >> v >> a >> b;
            fare[u][v] = fare[v][u] = a;
            time[u][v] = time[v][u] = b;
        }
        for(int k = 1; k <= n; k++){
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    fare[i][j] = min(fare[i][j], fare[i][k] + fare[k][j]);
                    time[i][j] = min(time[i][j], time[i][k] + time[k][j]);
                }
            }
        }
        int t;
        cin >> t;
        for(int i = 0; i < t; i++){
            int u, v, q;
            cin >> u >> v >> q;
            if(q == 0) cout << fare[u][v];
            else cout << time[u][v];
            cout << endl;
        }
    }
}