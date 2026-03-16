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
	while(1){
		int d[3]={},n,r;
		rep(i,0,3) cin>>d[i];
		if(d[0]==0&&d[1]==0&&d[2]==0) break;
		sort(d,d+3);
		double l;
		l=pow(d[0]*d[0]+d[1]*d[1],0.5)*0.5;
		cin>>n;
		rep(i,0,n){
			cin>>r;
			o((l<r?"OK":"NA"));
		}
	}
}