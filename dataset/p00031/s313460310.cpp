#include <cstdio>
using namespace std;

int main(){
	int n;
	
	while((scanf("%d", &n)) != EOF){
		for(int i = 0; i < 10; i++){
			if(n >> i & 1){
				n -= 1 << i;
				printf("%d%c", 1 << i, (n > 0)? ' ' : '\n');
			}
		}
	}
	
	return 0;
}