#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int a[5],b[20];
	while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])!=EOF){
		sort(a,a+5);
		for(int i=0;i<14;i++)b[i]=0;
		for(int i=0;i<5;i++)b[a[i]]++;
		sort(b,b+14,cmp);
		if(b[0]==4)printf("four card\n");
		else if(b[0]==3){
			if(b[1]==2)printf("full house\n");
			else printf("three card\n");
		}
		else if(b[0]==2){
			if(b[1]==2)printf("two pair\n");
			else printf("one pair\n");
		}
		else if(a[1]==a[2]-1&&a[3]==a[2]+1&&a[3]==a[4]-1){
			if(a[0]==a[1]-1)printf("straight\n");
			else if(a[0]==1&&a[4]==13)printf("straight\n");
			else printf("null\n");
		}
		else printf("null\n");
	}
}