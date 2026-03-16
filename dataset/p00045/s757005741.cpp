#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
using namespace std;

int main(){
	int p,n,sum=0,k=0,num=0;
	double ans;
	while(scanf("%d,%d",&p,&n)!=EOF){
		//if(p==0) break;
		k++;
		sum+=p*n;
		num+=n;
	}
	cout<<sum<<endl;
	ans=(double)num/k;
	printf("%d\n",(int)(ans+0.5) );
}