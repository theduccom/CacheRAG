#include <cstdio>
#include <iostream>

using namespace std;

bool is_prime(const unsigned n);


int main(){
	int n=2;
	int p=0;
	int c;
	int data[10000];
	int ans=0;

	while(p < 10000){
		if(is_prime(n)){
			data[p++] = n;
		}
		n++;
	}


	scanf("%d",&c);
	while(c != 0){
		p= ans = 0;
		for(int i=0;i<c;i++){
			ans += data[i];
		}
		printf("%d\n",ans);

		scanf("%d",&c);
	}


	return 0;
}

bool is_prime(const unsigned n){
    switch(n){
        case 0: 
        case 1: return false;
        case 2: 
        case 3: return true;
    } 

    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    if(n%6 != 1 && n%6 != 5) return false;

    for(unsigned i=5;i*i<=n;i+=6){
        if(n%i     == 0) return false;
        if(n%(i+2) == 0) return false;
    }

    return true;}