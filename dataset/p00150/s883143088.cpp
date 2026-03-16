#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;



int main(){
	int dt[10003];
	dt[0]=dt[1]=0;
	loop(i,2,10003)dt[i]=1;
	dt[10001]=dt[10002]=0;
	for(int i=2;i<100;i++){
		if(dt[i]==1){
			for(int j=2;i*j<10000;j++){
				dt[i*j]=0;
			}
		}
	}
	int n;
	while(1){
		cin>>n;
		if(n==0)break;
		int ans=0;
		rep(i,n-1){
			if(dt[i]==1 && dt[i+2]==1){
				ans=i;
			}
		}
		cout<<ans<<" "<<ans+2<<endl;
	}
	return 0;
}