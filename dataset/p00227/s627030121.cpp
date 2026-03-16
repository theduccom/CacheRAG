#include<stdio.h>
#include<algorithm>
using namespace std;
int table[1000];
int main(){
	int a,b;
	while(scanf("%d%d",&a,&b),a){
		int sum=0;
		for(int i=0;i<a;i++){
			scanf("%d",table+i);
			sum+=table[i];
		}
		std::sort(table,table+a);
		for(int j=a-b;j>=0;j-=b)sum-=table[j];
		printf("%d\n",sum);
	}
}