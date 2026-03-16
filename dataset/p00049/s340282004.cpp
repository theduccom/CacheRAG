#include <cstdio>
using namespace std;

int main(){
	int sum[4];
	int num;
	char type[2];
	
	for(int i = 0; i < 4; i++) sum[i] = 0;
	
	while((scanf("%d,%s", &num, type)) != EOF){
		if(type[0] == 'A' && type[1] == 'B') sum[2]++;
		else if(type[0] == 'A') sum[0]++;
		else if(type[0] == 'B') sum[1]++;
		else if(type[0] == 'O') sum[3]++;
	}
	
	for(int i = 0; i < 4; i++){
		printf("%d\n", sum[i]);
	}
	
	return 0;
}