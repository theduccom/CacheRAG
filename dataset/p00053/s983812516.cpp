#include <cstdio>
using namespace std;

int main(){
	bool prime[1000000];
	int n, p, res;
	
	while(true){
		scanf("%d", &n);
		if(n == 0) break;
		
		p = 2; res = 0;
		for(int i = 0; i < 1000000; i++) prime[i] = true;
		for(int i = 0; i < n; i++){
			while(!prime[p]) p++;
			res += p;
			for(int j = p; j < 1000000; j += p){
				prime[j] = false;
			}
			p++;
		}
		
		printf("%d\n", res);
	}
	
	return 0;
}