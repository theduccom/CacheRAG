#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
	if(n%2 == 0){
		return false;
	}
	for(int i=3; i*i<=n; i+=2){
		if(n%i == 0){
			return false;
		}
	}
	return true;
}

main(){
	while(true){
		int n;
		cin >> n;
		
		if(n == 0){
			break;
		}
		
		// 偶数だったらnを1へらす
		if(n%2 == 0){
			n--;
		}
		
		for(int i=n; i>=4; i-=2){
			if( isPrime(i) && isPrime(i-2) ){
				printf("%d %d\n",i-2,i);
				break;
			}
		}
	}
}
