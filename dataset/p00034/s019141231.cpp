#include <cstdio>

using namespace std;

int main()
{
	int l[10];
	int v1,v2;
	
	while(scanf("%d,",&l[0])!=EOF){
		for(int i=1;i<10;i++){
			scanf("%d,",&l[i]);
		}
		scanf("%d,%d",&v1,&v2);
		double sum=0;
		for(int i=0;i<10;i++){
			sum+=l[i];
		}
		double ld=((double)(sum/(v1+v2)))*(double)v1;
		int result=0;
		for(int i=0;i<10;i++){
			if(ld>l[i]){
				ld-=l[i];
				result++;
			}
			else{
				result++;
				break;
			}
		}
		printf("%d\n",result);
	}
}