#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <bitset>
using namespace std;
#define INF	100000000
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
#define lb lower_bound
#define ub upper_bound
#define SS stringstream
#define rep(i,n) for(int i = 0; i < n; i++)
#define sz(x) ((int)(x).size())
#define SORT(x) sort((x).begin(), (x).end())
#define RSORT(x) sort((x).begin(), (x).end(), greater<int>() )
#define clr(a,b) memset((a),(b),sizeof(a))
typedef long long int ll;
typedef pair<int, int> P;
typedef vector<int> Vi;
typedef vector<ll> Vll;
typedef vector<P> Vp;
typedef priority_queue<P, vector<P>, greater<P> > PQ;

int n,x,y;
bool cell[8][8];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n;
	rep(u,n){
		queue<P> que;
		rep(i,8) rep(j,8){
			char a; cin >> a;
			cell[i][j] = a-'0';
		}
		cin >> x >> y; x--; y--;
		que.push(P(y,x));
		cell[y][x] = 0;
		while(que.size()!=0){
			P p = que.front(); que.pop();
			for(int i = 1; i <= 3; i++){
				if(p.fi+i >= 8) break;
				if(cell[p.fi+i][p.sec]){
					cell[p.fi+i][p.sec] = 0;
					que.push(P(p.fi+i,p.sec));
				}
			}
			for(int i = 1; i <= 3; i++){
				if(p.fi-i < 0) break;
				if(cell[p.fi-i][p.sec]){
					cell[p.fi-i][p.sec] = 0;
					que.push(P(p.fi-i,p.sec));
				}
			}
			for(int i = 1; i <= 3; i++){
				if(p.sec+i >= 8) break;
				if(cell[p.fi][p.sec+i]){
					cell[p.fi][p.sec+i] = 0;
					que.push(P(p.fi,p.sec+i));
				}
			}
			for(int i = 1; i <= 3; i++){
				if(p.sec-i < 0) break;
				if(cell[p.fi][p.sec-i]){
					cell[p.fi][p.sec-i] = 0;
					que.push(P(p.fi,p.sec-i));
				}
			}
		}
		cout << "Data " << u+1 << ":" << endl;
		rep(i,8){
			rep(j,8){
				cout << cell[i][j];
			}
			cout << endl;
		}
	}
}