#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	char c1,c2,in='A';
	while(scanf("%c,%c",&c1,&c2)!=EOF){
		//if(c1=='Z') break;
		if(c1==in) in=c2;
		else if(c2==in) in=c1;
	}
	cout<<in<<endl;
}