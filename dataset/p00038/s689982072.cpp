#include<stdio.h>
#include<algorithm>

int main(){
	int a[5];
	while(~scanf("%d,%d,%d,%d,%d",a,a+1,a+2,a+3,a+4)){
		std::sort(a,a+5);
		if((a[0]==a[1])&&(a[2]==a[3])&&(a[2]==a[1]))printf("four card\n");
		else if((a[1]==a[2])&&(a[3]==a[4])&&(a[3]==a[2]))printf("four card\n");
		else if((a[0]==a[1])&&(a[1]==a[2])&&(a[3]==a[4]))printf("full house\n");
		else if((a[0]==a[1])&&(a[2]==a[3])&&(a[3]==a[4]))printf("full house\n");
		else if((a[0]==1)&&(a[1]==10)&&(a[2]==11)&&(a[3]==12)&&(a[4]==13))printf("straight\n");
		else if((a[0]+1==a[1])&&(a[1]+1==a[2])&&(a[2]+1==a[3])&&(a[3]+1==a[4]))printf("straight\n");
		else if(
			((a[0]==a[1])&&(a[1]==a[2]))||
			((a[1]==a[2])&&(a[2]==a[3]))||
			((a[2]==a[3])&&(a[3]==a[4])))printf("three card\n");
		else if(
			((a[0]==a[1])&&((a[2]==a[3])||(a[3]==a[4])))||
			((a[1]==a[2])&&(a[3]==a[4])))printf("two pair\n");
		else if((a[0]==a[1])||(a[1]==a[2])||(a[2]==a[3])||(a[3]==a[4]))printf("one pair\n");
		else printf("null\n");
	}
}