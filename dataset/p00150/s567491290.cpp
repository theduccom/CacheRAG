//150
#include <iostream>
#include <cstdio>
using namespace std;

int main(){

	const int x=10001;
	int p[x];
	int i,k,j,n;

	for(i=2; i<x; i++){
		p[i]=1;
	}
	p[0]=p[1]=0;
	for(i=2; i*i<=x; i++){
		if(p[i]){
			for(j=i*2; j<x; j+=i){
				p[j]=0;
			}
		}
	}

	while(1){

		cin >> n;
		if(!n){
			break;
		}

		for(k=n; k>0; k--){
			if(p[k] && p[k-2]){
				cout << k-2 << " " << k << endl;
				break;
			}
		}
	}

}