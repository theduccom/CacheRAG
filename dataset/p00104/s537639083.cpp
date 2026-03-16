#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <cstring>
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

int h,w;
char cell[110][110];
bool used[110][110];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	while(cin >> h >> w){
		if(h == 0 && w == 0) break;
		rep(i,110) rep(j,110) used[i][j] = 0;
		rep(i,h) rep(j,w) cin >> cell[i][j];
		P p; p.fi = 0; p.sec = 0;
		while(true){
			if(used[p.fi][p.sec]){
				cout << "LOOP" << endl;
				break;
			}
			used[p.fi][p.sec] = 1;
			if(cell[p.fi][p.sec] == '.'){
				cout << p.sec << " " << p.fi << endl;
				break;
			}
			else if(cell[p.fi][p.sec] == '^') p.fi--;
			else if(cell[p.fi][p.sec] == '<') p.sec--;
			else if(cell[p.fi][p.sec] == '>') p.sec++;
			else if(cell[p.fi][p.sec] == 'v') p.fi++;
		}
	}
}