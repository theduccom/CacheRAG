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
	double x,h,s;
	while(1){
		cin>>x>>h;
		if(x==0&&h==0) break;
		s=pow(x,2)+2*x*pow(x*x/4+h*h,0.5);
		printf("%.8lf\n",s);
	}

}