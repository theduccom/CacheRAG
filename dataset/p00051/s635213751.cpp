#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
	int n, M[8], m[8], res;
	char str[8];
	
	scanf("%d", &n);
	
	for(int j = 0; j < n; j++){
		scanf("%s", str);
		
		//printf("n = %d : j = %d\n", n, j);
		
		for(int i = 0; i < 8; i++){
			m[i] = str[i] - 48;
		}
		
		sort(m, m + 8);
		
		for(int i = 0; i < 8; i++){
			M[i] = m[7 - i];
		}
		
		for(int i = 7; i >= 0; i--){
			M[i] -= m[i];
			if(M[i] < 0){
				M[i] += 10;
				M[i - 1]--;
			}
		}
		res = M[0] * 10000000
				+ M[1] * 1000000
				+ M[2] * 100000
				+ M[3] * 10000
				+ M[4] * 1000
				+ M[5] * 100
				+ M[6] * 10
				+ M[7];
		
		printf("%d\n", res);
	}
	
	return 0;
}