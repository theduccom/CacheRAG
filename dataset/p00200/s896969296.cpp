#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>
#define inf 40000000
using namespace std;

int main(){
    int n, m, k;
    while(cin >> n >> m){
        if(n == 0 && m == 0) break;
        vector<vector<int>> cost(m+1,vector<int>(m+1,inf));
        vector<vector<int>> tim(m+1,vector<int>(m+1,inf));
        for(int i = 0;i<m+1;i++){
            cost[i][i] = 0;
            tim[i][i] = 0;
        }
        for(int i = 0;i<n;i++){
            int a, b;
            cin >> a >> b;
            cin >> cost[a][b] >> tim[a][b];
            cost[b][a] = cost[a][b];
            tim[b][a] = tim[a][b];
        }
        cin >> k;
        for(int i = 0;i<k;i++){
            vector<long long int> dkt(m+1,inf);
            vector<bool> checked(m+1,false);
            // priority_queue<pair<int,int>,greater<int>> pque;
            int p, q, r;
            cin >> p >> q >> r;
            dkt[p] = 0;
            // pque.push(pair<int,int>(0,p));
            while(!checked[q]){
                int top = inf, min = inf;
                for(int j = 1;j<m+1;j++){
                    if(!checked[j] && min > dkt[j]){
                        top = j;
                        min = dkt[j];
                    }
                }
                checked[top] = true;
                for(int j = 1;j<m+1;j++){
                    if(checked[j] || top == j) continue;
                    if(r == 0){
                        dkt[j] = std::min(dkt[j],(dkt[top]+cost[top][j]));
                    }
                    else{
                        dkt[j] = std::min(dkt[j],dkt[top]+tim[top][j]);
                    }
                }
            }
            cout << dkt[q] << endl;
        }
    }
    return 0;
}
