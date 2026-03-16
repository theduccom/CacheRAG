#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#include <numeric>
#include <iomanip>
#define fi first
#define se second
#define fcout(n) cout<<fixed<<setprecision((n))
#define cinl(str) getline(cin,(str))
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int INF=10000009;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };
int dx2[4] = { 0,-2,0,2 };
int dy2[4] = { -2,0,2,0 };
int m[15][15];
int main() {
	int x[10000],y[10000],z[10000];
	char s,t;
	int count=0,M=0;
	int n=0;
	while(true){
		cin>>x[n]>>s>>y[n]>>t>>z[n];
		if (cin.eof())break;
		n++;
	}
	n--;
	//cout<<n<<endl;
	for(int i=0;i<=n;i++){
		if(z[i]==1){
			m[y[i]][x[i]]++;
			for(int j=0;j<4;j++){
				if(value(y[i]+dy[j],x[i]+dx[j],10,10)){
					m[y[i]+dy[j]][x[i]+dx[j]]++;
				}
			}
		}
		else if(z[i]==2){
			for(int j=-1;j<=1;j++){
				for(int k=-1;k<=1;k++){
					if(value(y[i]+k,x[i]+j,10,10)){
						m[y[i]+k][x[i]+j]++;
					}
				}
			}
		}
		else{
			for(int j=-1;j<=1;j++){
				for(int k=-1;k<=1;k++){
					if(value(y[i]+k,x[i]+j,10,10)){
						m[y[i]+k][x[i]+j]++;
					}
				}
			}
			for(int j=0;j<4;j++){
				if(value(y[i]+dy2[j],x[i]+dx2[j],10,10)){
					m[y[i]+dy2[j]][x[i]+dx2[j]]++;
				}
			}
		}
		/*for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				cout<<m[i][j]<<" ";
			}
			cout<<endl;
		}*/
	}
	for(int i=0;i<=9;i++){
		for(int j=0;j<=9;j++){
			if(m[i][j]==0) count++;
			if(m[i][j]>M) M=m[i][j];
		}
	}
	cout<<count<<endl;
	cout<<M<<endl;
}