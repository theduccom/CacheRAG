#include <algorithm>
#include <cstdio>
#include <climits>
#include <vector>
using namespace std;

int main() {
    while(true) {
        int n,m; scanf("%d%d", &n, &m);
        if(m==0) break;
        vector<vector<pair<int,pair<int,int> > > > graph;
        graph.resize(m);
        for(int i = 0; i < n; i++) {
            int a,b,c,t; scanf("%d%d%d%d", &a, &b, &c, &t); a--; b--;
            graph[a].push_back(make_pair(b,make_pair(c,t)));
            graph[b].push_back(make_pair(a,make_pair(c,t)));
        }
        int k; scanf("%d", &k);
        for(int ii = 0; ii < k; ii++) {
            int p,q,r; scanf("%d%d%d", &p, &q, &r); p--; q--;
            const int INIT = INT_MAX/2;
            const int FIN = INT_MAX/2-1;
            static int segt[1<<8];
            fill(segt, segt+(1<<8), INIT);
            segt[p+(1<<7)] = 0;
            for(int j = p+(1<<7); j > 1; j>>=1) segt[j>>1] = min(segt[j],segt[j^1]);
            while(segt[1] < FIN) {
                int j;
                for(j = 1; j < (1<<7);) if(segt[j*2]<segt[j*2+1]) j=j*2; else j=j*2+1;
                int cur = j&~(1<<7);
                int curcost = segt[j];
                segt[j] = FIN;
                for(; j > 1; j>>=1) segt[j>>1] = min(segt[j],segt[j^1]);
                if(cur == q) {
                    printf("%d\n", curcost);
                    break;
                }
                for(int i = 0; i < (int)graph[cur].size(); i++) {
                    int to = graph[cur][i].first;
                    int ecost = graph[cur][i].second.first;
                    if(r==1) ecost = graph[cur][i].second.second;
                    if(segt[to+(1<<7)] != FIN && segt[to+(1<<7)] > curcost+ecost) {
                        segt[to+(1<<7)] = curcost+ecost;
                        for(j = to+(1<<7); j > 1; j>>=1) segt[j>>1] = min(segt[j],segt[j^1]);
                    }
                }
            }
        }
    }
    return 0;
}