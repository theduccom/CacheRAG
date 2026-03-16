#include<cstdio>

#define reps(i,f,n) for(int i = f; i < int(n); i++)
#define rep(i,n) reps(i,0,n)
using namespace std;

int main(void){
	
	int b1,b2,b3;
	
	scanf("%d%d%d", &b1, &b2, &b3);
	
	if(b1 == b2 && b1 != b3)
		puts("Open");
	else
		puts("Close");
	
	return 0;
}