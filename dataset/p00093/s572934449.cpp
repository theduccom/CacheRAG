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
	int a,b,n=0;
	while(cin>>a>>b){
		if(a==0&&b==0) break;
		if(n) cout<<endl;
		int c=0;
		rer(i,a,b){
			if(i%4==0&&i%100!=0||i%400==0){
				o(i); c++;
			}
		}
		if(c==0) o("NA");
		n++;
	}
}