#include <cstdio>
using namespace std;

int main () {
	int n1,n2,n3,a=0,b=0;
	while (scanf("%d,%d,%d",&n1,&n2,&n3)!=EOF) {
		if((n1*n1+n2*n2)==(n3*n3))a++;
		else if(n1==n2)b++;
	}
	printf("%d\n%d\n",a,b);
}