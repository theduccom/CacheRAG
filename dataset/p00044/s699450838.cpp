#include<iostream>
#include<algorithm>
#define N 50022
using namespace std;

int main(){

	int pn[N], n, p;

	fill(pn, pn+N, 1);
	for(int i=2; i<N; i++){
		if(pn[i] == 1){
			for(int j=2; (p = i * j)<N; j++){
				pn[p] = 0;
			}
		}
	}
	
	while(cin >> n){
		for(int i=n-1; i>0; i--){
			if(pn[i] == 1){
				cout << i << " ";
				break;
			}
		}
		for(int i=n+1; i<N; i++){
			if(pn[i] == 1){
				cout << i << endl;
				break;
			}
		}		
	}

	return 0;

}