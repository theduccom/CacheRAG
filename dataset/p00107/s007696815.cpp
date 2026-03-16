#include<bits/stdc++.h>
using namespace std;
#define POW(u) ((u)*(u))
#define RAD(a,b) sqrt(POW((double)a/2.0)+POW((double)b/2.0))
signed main(void){
	ios::sync_with_stdio(false);
	int a,b,c,n,x;
	while(cin>>a>>b>>c&&(a|b|c)){
		cin>>n;
		if(a>c)	swap(a,c);
		if(b>c)	swap(b,c);
		for(int i=1;i<=n;i++){
			cin>>x;
			if(x>RAD(a,b))
				cout<<"OK"<<endl;
			else
				cout<<"NA"<<endl;
		}
	}
}