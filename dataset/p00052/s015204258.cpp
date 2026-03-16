#include <cstdio>
using namespace std;

int main(){
	int n;
	int div, sisu;
	int sum, res;
	
	while((scanf("%d", &n)) != 0){
		
		if(n == 0) break;
		
		div = 5; sisu = 1;
		sum = 0; res = 0;
		
		while(div * 5 <= n){
			div *= 5;
			sisu++;
		}
		
		while(sisu > 0){
			res += (n / div - sum) * sisu;
			sum = n / div;
			sisu--;
			div /= 5;
		}
		
		printf("%d\n", res);
	}
	
	return 0;
}