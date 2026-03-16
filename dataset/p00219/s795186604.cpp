#include<iostream>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

int main(){
	int n,cnt;
	int dt[10];
	while(cin>>n,n){
		rep(i,10)dt[i]=0;
		rep(i,n){
			cin>>cnt;
			dt[cnt]++;
		}
		rep(i,10){
			if(dt[i]==0)cout<<"-";
			else rep(j,dt[i])cout<<"*";
			cout<<endl;
		}
	}
	return 0;
}