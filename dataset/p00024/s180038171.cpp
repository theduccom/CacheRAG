#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	double v,h;
	while(scanf("%lf",&v)!=EOF){
		int n=1;
		h=v*v/19.6;
		while(1){
			if(5*n-5>h) break;
			n++;
		}
		cout<<n<<endl;
	}
}