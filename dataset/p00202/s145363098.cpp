#include<cstdio>
#include<iostream>
using namespace std;
int so[1000001],m[1000001];
int main(void){
	int i,j,n,x,v[30],flg;
	while(1){
		cin>>n>>x;
		if(n==0) break;
		for(i=0;i<n;i++) cin>>v[i];
		for(i=0;i<=x;i++) so[i]=1;
		for(i=2;i*i<=x;i++){
			if(so[i]!=0){
				for(j=i*2;j<=x;j+=i) so[j]=0;
			}
		}
		for(i=0;i<=x;i++) m[i]=0;
		m[0]=1;
		for(i=0;i<n;i++){
			for(j=0;j<=x;j++){
				if(m[j]==1) m[j+v[i]]=1;
			}
		}
		flg=0;
		for(i=x;i>0;i--){
			if(so[i]==1&&m[i]==1){
				cout<<i<<endl;
				flg=1;
				break;
			}
		}
		if(flg==0) cout<<"NA"<<endl;
	}
	return 0;
}