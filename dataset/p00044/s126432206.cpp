#include<iostream>
#include<math.h>
using namespace std;

#define MAX 1000000

int main(){

	bool p[MAX+1];
	int i,j,n;

	p[0]=false;
	p[1]=true;
	for(i=2; i<=MAX; i++){
		p[i] = true;
	}
	for(i=2; i<=sqrt(MAX)+1; i++){
		if(p[i]){
			for(j=i*2; j<=MAX; j=j+i){
				p[j] = false;
			}
		}
	}
	
	while(cin >> n){
		for(int i=n-1 ; i>=0 ; i--){
			if(p[i]){
				cout << i << " " ;
				break;
			}
		}
		for(int i=n+1 ; i<MAX ; i++){
			if(p[i]){
				cout << i << endl ;
				break;
			}
		}
	}
}