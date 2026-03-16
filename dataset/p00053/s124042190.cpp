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
	for(int i=2;i<sqrt(105000.);++i){
		if(pn[i]){
			for(int j=i*2;j<105000;j+=i){
				pn[j]=false;
			}
		}
	}
}

int main(){
	int i,n,sum;
	bool pn[105000];
	memset(pn , true , sizeof(pn));
	pn[0]=false;
	pn[1]=false;
	sieve(pn);
	while(cin >> n , n){
		sum=0 ; i=2;
		while(n>0){
			if(pn[i]) {
				sum+=i;
				n--;
			}
			i++;
		}
		cout << sum << endl;
	}
	
	return 0; 
}