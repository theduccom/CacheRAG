#include <cstdio>
using namespace std;
int i,j;

int main(){
for(i=1;i<10;i++){
	for(j=1;j<10;j++){
		printf("%dx%d=%d\n",i,j,i*j);
	}
}	
return 0;
}