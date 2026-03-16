#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;
int main(void)
{
	float yama,max,min,x;
	max=-1;
	min=1000.0;
	while(scanf("%f",&yama)!=EOF){
		if(max<yama){
			max=yama;
		}
		else if(min>yama){
			min=yama;
		}
	}
	x=max-min;
	printf("%f\n",x);
	return 0;
}