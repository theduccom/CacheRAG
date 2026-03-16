#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
const int    INF = 100000000;
const double EPS = 1e-10;
const int    MOD = 1000000007;
using namespace std;
typedef pair<int,int> P;

int n, m;
int e[20][20];

int main(){
	cin >> n >> m;
	rep(i,n) rep(j,n) e[i][j] = INF;
	rep(i,n) e[i][i] = 0;
	rep(i,m){
		int x[4];
		string str;
		cin >> str;
		int tmp = 0, cnt = 0;
		rep(j,str.size()){
			if(str[j] != ','){
				tmp *= 10;
				tmp += str[j]-'0';
			} else{
				x[cnt] = tmp;
				cnt++; tmp = 0;
			}
			if(j == str.size()-1) x[cnt] = tmp;
		}
		x[0]--; x[1]--;
		e[x[0]][x[1]] = x[2];
		e[x[1]][x[0]] = x[3];
	}
	rep(k,n) rep(i,n) rep(j,n) e[i][j] = min(e[i][j],e[i][k]+e[k][j]);
	int y[4];
	string str; cin >> str;
	int tmp = 0, cnt = 0;
	rep(j,str.size()){
		if(str[j] != ','){
			tmp *= 10;
			tmp += str[j]-'0';
		} else{
			y[cnt] = tmp;
			cnt++; tmp = 0;
		}
		if(j == str.size()-1) y[cnt] = tmp;
	}
	y[0]--; y[1]--;
	cout << y[2]-y[3]-e[y[0]][y[1]]-e[y[1]][y[0]] << endl;
	
}