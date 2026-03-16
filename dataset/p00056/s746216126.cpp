#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <stack>
#include <set>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

void sieve(bool* pn){
		for(int i=2;i<sqrt(50100.);++i){
		if(pn[i]){
			for(int j=i*2;j<=50100;j+=i){
				pn[j]=false;
			}
		}
	}
}

int main(){
	bool pn[50100];
	int ans[50001];
	memset(pn , true , sizeof(pn));
	pn[0]=pn[1]=false;
	sieve(pn);
	int i , j=2 , n , len=0;
	for(i=0 ; i<=50000 ;++i ){
		if(pn[i]) len++;
	}
	int* prime = new int [len];
	for(i=0;i<len;++i){
		while(1){
			if(pn[j]){
				prime[i]=j;
				j++;
				break;
			}
			j++;
		}
	}
	for(i=0 ; prime[i] <=25000 ;++i){
		for(j=i ;prime[i]+prime[j]<=50000;++j){
			ans[prime[i]+prime[j]]++;
		}
	}
	
	while(cin >> n , n){
		cout << ans[n] << endl;
	}
	delete [] prime;
	return 0; 
}