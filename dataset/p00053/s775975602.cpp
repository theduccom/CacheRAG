#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
	int n,m,sum,w,i;
	
	long img[10000];
	img[0]=2;
	m=1;
	for(long t=3;m<=10000;t+=2){
		w=0;	
		for(i=0;(img[i]<=sqrt(t)) && (i<=m);i++){
			if(t % img[i]==0){
				w++;
			}
		}
		if(w==0){
			img[m]=t;
			m++;
		}
	}
		while(1){
			cin >> n;
			if(n==0){
				return 0;
			}
			sum=0;
		for(i=0;i<n;i++){
			sum+=img[i];
		}
			cout << sum << "\n";
		
	}
}