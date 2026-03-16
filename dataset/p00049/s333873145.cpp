#include<cstdio>
#include<cstring>

using namespace std;

int main(void){
	char str[128];
	int A=0;
	int B=0;
	int O=0;
	int AB=0;
	while( scanf("%s", str) != EOF ){
		
		int n = strlen(str)-1;
		
		if(str[n-1] == 'A')AB++;
		else if(str[n] == 'A')A++;
		else if(str[n] == 'B')B++;
		else if(str[n] == 'O')O++;
		
	}
	printf("%d\n%d\n%d\n%d\n", A, B, AB, O);
	
	return 0;
}