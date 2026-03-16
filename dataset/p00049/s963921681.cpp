#include <cstdio>
#include <cstring>
using namespace std;

char ary[10];
int main(){
	int a=0,b=0,o=0,ab=0;
	while(~scanf("%*d,%s",ary)){
		if(strcmp(ary,"A")==0) a++;
		else if(strcmp(ary,"B")==0) b++;
		else if(strcmp(ary,"O")==0) o++;
		else if(strcmp(ary,"AB")==0) ab++;
	}
	printf("%d\n%d\n%d\n%d\n",a,b,ab,o);
	return 0;
}