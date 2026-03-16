#include <cstdio>
using namespace std;

int main(){
	const int size = 60000;
	bool prime[size + 1];
	int n;
	
	for(int i = 0; i <= size; i++) prime[i] = false;
	for(int i = 2; i <= size; i++){
		if(!prime[i]){
			for(int j = 2 * i; j <= size; j += i){
				prime[j] = true;
			}
		}
	}
	
	while((scanf("%d", &n)) != EOF){
		for(int i = n - 1; i >= 0; i--){
			if(!prime[i]){
				printf("%d ", i);
				break;
			}
		}
		for(int i = n + 1; i <= size; i++){
			if(!prime[i]){
				printf("%d\n", i);
				break;
			}
		}
	}
	
	return 0;
}