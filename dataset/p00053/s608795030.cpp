#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int n[1000000]={0};
	int x, ans=0,l;
	
	for(int i=1; i<=999999; i++){
		if(i==1) n[i]=-1;
		else if(n[i]==0){
			for(int k=2; k*i<=999999; k++){
				n[k*i]=-1;
			}
		}
	}
	
	while(cin>>x){
		if(x==0) break;
		ans=0;
		l=0;
		for(int j=1; l<x; j++){
			if(n[j]==0){
				ans+=j;
				l++;
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}