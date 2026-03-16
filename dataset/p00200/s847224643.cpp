class _in{struct my_iterator{int it;const bool rev;explicit constexpr my_iterator(int it_, bool rev=false):it(it_),rev(rev){}constexpr int operator*(){return it;}constexpr bool operator!=(my_iterator& r){return it!=r.it;}void operator++(){rev?--it:++it;}};const my_iterator i,n;public:explicit constexpr _in(int n):i(0),n(n){}explicit constexpr _in(int i,int n):i(i,n<i),n(n){}constexpr const my_iterator& begin(){return i;}constexpr const my_iterator& end(){return n;}};

#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int dist[100][100];
int cost[100][100];
inline void chmin(int& a, int b) { a = min(a, b); }
int main() {
    cin.tie(0); ios::sync_with_stdio(false);
    for(int N, M; cin >> N >> M && N; ) {
        for(int i : _in(100)) {
            fill_n(dist[i], 100, INF);
            fill_n(cost[i], 100, INF);
            dist[i][i] = cost[i][i] = 0;
        }
        for(int _ : _in(N)) {
            int a, b, co, di;
            cin >> a >> b >> co >> di;
            --a;
            --b;
            chmin(dist[a][b], di);
            chmin(dist[b][a], di);
            chmin(cost[a][b], co);
            chmin(cost[b][a], co);
        }
        for(int k : _in(M)) for(int i : _in(M)) for(int j : _in(M)) {
            chmin(dist[i][j], dist[i][k] + dist[k][j]);
            chmin(cost[i][j], cost[i][k] + cost[k][j]);
        }
        int K; cin >> K;
        while(K--) {
            int p, q, r;
            cin >> p >> q >> r;
            --p;
            --q;
            cout << (r == 0 ? cost[p][q] : dist[p][q]) << '\n';
        }
    }
    return 0;
}