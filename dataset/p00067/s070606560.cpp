#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <sstream>
#include <iomanip>
#include <complex>
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define All(X) X.begin(),X.end()
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define pb push_back 
ll gcd(ll a,ll b){return b?gcd(b,a%b):a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}

bool inrange(int x,int y){
	if(x<0||y<0||x>11||y>11) return false;
	else return true;
}

int data[20][20];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

void search(int x,int y){
	REP(i,4){
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(!inrange(nx,ny)) continue;
		if(data[nx][ny]==1) {
			data[nx][ny] = 0;
			search(nx,ny);
		}
	}
}

int main(){
	while(1){
		string str;
		REP(i,12){
			cin >> str;
			REP(j,12){
				data[i][j] = str[j] - '0';
			}
		}
		
		if(cin.eof()) break;
		ll int cnt = 0;
		REP(i,12){
			REP(j,12){
				if(data[i][j]==1){
					search(i,j);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
		
	}
	return 0;
}