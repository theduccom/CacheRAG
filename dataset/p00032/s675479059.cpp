#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int a,b,c,t=0,h=0;
	char k;
	while(cin>>a){
		//if(a==0)break;
		cin>>k>>b>>k>>c;
		if(a*a+b*b==c*c && a!=b) t++;
		else if(a==b) h++;
	}
	cout<<t<<endl<<h<<endl;
}