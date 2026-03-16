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
		int w,ans=3130;
		cin>>w;
		if(w==-1) break;
		if(w<=10){
			cout<<3130<<endl; continue;
		}
		w-=10;
		rep(i,0,10){
			if(w==0) break; ans-=125; w--; 
		}
		rep(i,0,10){
			if(w==0) break; ans-=140; w--;
		}
		rep(i,0,100){
			if(w==0) break; ans-=160; w--;
		}
		o(ans);
	}
}