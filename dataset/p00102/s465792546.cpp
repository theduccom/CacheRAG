#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pii;

int main(){
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		int d[12][12]={};
		rep(i,0,n) rep(j,0,n){
			cin>>d[i][j]; d[i][n]+=d[i][j];
		}
		rer(i,0,n) rep(j,0,n) d[n][i]+=d[j][i];
		rer(i,0,n){
			rer(j,0,n){
				printf("%5d",d[i][j]);
			}
			printf("\n");
		}
	}
}