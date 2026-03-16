#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
	int A=0,B=0,AB=0,O=0,tmp;
	char buf[3];

	while(scanf("%d,%s",&tmp,buf)!=EOF){
		if(buf[0] == 'B'){
			B += 1;
		}else if(buf[0] == 'O'){
			O += 1;
		}else if(buf[0] == 'A' && buf[1] == '\0'){
			A += 1;
		}else{
			AB += 1;
		}
	}

	printf("%d\n%d\n%d\n%d\n",A,B,AB,O);

	return 0;
}