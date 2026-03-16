#include<cstdio>
//#include<algorithm>
using namespace std;

int a,b,c,tyo,hi;

int main(){
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(c*c==a*a+b*b) tyo++;
		if(a==b) hi++;
	}
	printf("%d\n%d\n",tyo,hi);

	return 0;
}