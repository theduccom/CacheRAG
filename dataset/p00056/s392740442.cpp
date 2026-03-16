#include <iostream>
using namespace std;
int main(){
	bool p[50000];
	p[1]=false;
	for(int i=2;i<50000;i++){
		p[i]=true;
	}
	for(int j=2;j<50000;j++){
		if(p[j]){
			for(int k=j*2;k<50000;k+=j){
				p[k]=false;
			}
		}
	}
	int n;
	while(cin>>n){
		if(n==0) break;
		int count=0;
		if(p[n-2]) count++;
		for(int l=3;l<=n/2;l+=2){
			if(p[l] &&  p[n-l]) count++;
		}
		cout<<count<<endl;
	}
	return 0;
}