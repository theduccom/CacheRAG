#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	int A=0,B=0,AB=0,O=0,x;
	char str[3];
	while(scanf("%d,%s",&x,str)!=EOF){
		if (!strcmp(str,"A"))
			A++;
		else if (!strcmp(str,"B"))
			B++;
		else if (!strcmp(str,"AB"))
			AB++;
		else if (!strcmp(str,"O"))
			O++;
	}
	printf("%d\n%d\n%d\n%d\n",A,B,AB,O);
	return 0;
}