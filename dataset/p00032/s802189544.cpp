#include <cstdio>

using namespace std;

int main()
{
	int a,b,c,rh=0,re=0;
	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a*a+b*b==c*c){
			re++;
		}
		else if(a==b){
			rh++;
		}
	}
	printf("%d\n",re);
	printf("%d\n",rh);
	
	return 0;
}