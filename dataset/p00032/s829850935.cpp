#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;



int main(){
	int a,b,c,tyou = 0,hishi = 0;

	while(scanf("%d,%d,%d",&a,&b,&c)!=EOF){
		if(a*a+b*b==c*c)tyou++;
		else{
			if(a == b)hishi++;
		}
	}

	printf("%d\n%d\n",tyou,hishi);

	return 0;
}