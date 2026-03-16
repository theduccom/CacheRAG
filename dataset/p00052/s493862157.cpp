#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){


int n;
	
	while(cin >> n){
		if(n==0 || cin.eof()) break;
		int m2=0, m5=0,wk;
		rep2(i,1,n+1){
			wk=i;
			while(wk%2==0 || wk%5==0){
				if(wk%2==0){ 
					m2++;
					wk /= 2;
				}
				if(wk%5==0){ 
					m5++;
					wk /= 5;
				}
			}	
		}
		printf("%d\n",min(m5,m2));

	}

	return 0;
	
	
}