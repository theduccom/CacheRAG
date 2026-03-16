#include <stdio.h>
#include <string>
#include <map>
using namespace std;

int main(void){
	map<string,int> m;
	int a;
	char str[100];
	while(scanf("%d,%s",&a,str)!=EOF) m[string(str)]++;
	printf("%d\n",m["A"]);
	printf("%d\n",m["B"]);
	printf("%d\n",m["AB"]);
	printf("%d\n",m["O"]);
	return 0;
}