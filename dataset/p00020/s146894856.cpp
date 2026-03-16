#include<cstdio>
#include<cstring>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	int len,i,j;
	char s;
	while(scanf("%c",&s)!=EOF) {
		if('a'<=s && 'z'>=s){
			s=s-('a'-'A');
			printf("%c",s);
		}
		else if(s==' ' || s=='.')	printf("%c",s);
	}
	printf("\n");
	return 0;
}