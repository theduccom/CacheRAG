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
	int n,i=0,out=0,score=0;
	bool fir=0,sec=0,thi=0;
	cin>>n;
	while(1){
		string s;
		cin>>s;
		if(s=="HIT"){
			if(thi) score++;
			thi=sec; sec=fir; fir=1;
		}if(s=="OUT"){
			out++;
			if(out==3){
				i++; o(score);
				if(i==n) break;
				fir=sec=thi=0;
				out=0; score=0;
				continue;
			}
		}if(s=="HOMERUN"){
			score++;
			if(fir) score++;
			if(sec) score++;
			if(thi) score++;
			fir=sec=thi=0;
		}
	}
}