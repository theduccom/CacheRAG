#include <stdio.h>
#include <iostream>
using namespace std;	
	int main ()
	{
		bool primes[1000001];
		primes[2] = true;
		for (int i = 3; i < 1000001; i += 2) {
	    		primes[i] = true;
		}
		for (int i = 3; i * i < 1000001; i += 2) {
	    		if (primes[i]) {
	        	for (int j = i * 2; j < 1000001; j += i) {
	           	 primes[j] = false;
	      		 }
	   		}
		}
		
		int num2[100000];
		int cnt2=0;
		for(int i=0;i<100000;i++){
			cin >> num2[i];
			if(num2[i]==0) i=100000;
			cnt2++;
		}
		for(int j=0;j<cnt2-1;j++){
			int x=0;
			int cnt=0;
			for(int i=0;i<1000000;i++){
				if(primes[i]==true){
					x+=i;
					cnt++;
				}
				if(num2[j] == cnt){
					break;
				}
			}
			cout << x << endl;
		}
	return 0;
	}