#include <cstdio>
#include <cstring>
using namespace std;
int main(){
	char str[10];
	int a,p=0,q=0,r=0,s=0;
while(scanf("%d,%s",&a,str)!=EOF){
	if(strcmp(str,"A")==0){
			p++;
		}else if(strcmp(str,"B")==0){
			q++;
		}else if(strcmp(str,"AB")==0){
			r++;
		}else if(strcmp(str,"O")==0){
			s++;
		}}
printf("%d\n%d\n%d\n%d\n",p,q,r,s);
	return 0;
}