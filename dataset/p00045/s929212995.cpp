#include<cstdio>
using namespace std;

int main(){
	int cnt=0;
	int sum=0,avg=0;
	int s,t;
	while(scanf("%d,%d",&s,&t)!=EOF){
		sum += s*t;
		avg += t;
		cnt++;
	}
	printf("%d\n%d\n",sum,(int)((double)avg/cnt+0.5));
	return 0;
}