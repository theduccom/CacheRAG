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

string data[500];
bool sumi[500][500];
int nx,ny,ansx,ansy;
int main(){
	int h,w;
	while(1){
		cin >> h >> w;
		if(h==0&&w==0) break;
		REP(i,h) cin >> data[i];
		REP(i,500) REP(j,500) sumi[i][j] = false;
		nx = 0; ny = 0;
		bool flg = true;
		sumi[nx][ny] = true;
		while(flg){
			if(data[nx][ny]=='>') ny++;
			if(data[nx][ny]=='<') ny--;
			if(data[nx][ny]=='^') nx--;
			if(data[nx][ny]=='v') nx++;
			if(data[nx][ny]=='.'){
				ansx = nx;
				ansy = ny;
				flg = false;
			}
			if(sumi[nx][ny]&&flg==true){
				ansx = -1;
				flg = false;
			}
			sumi[nx][ny] = true;
		}
		if(ansx==-1) cout << "LOOP" << endl;
		else cout << ansy << " " << ansx << endl;
	}
}