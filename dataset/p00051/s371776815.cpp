#include<stdio.h>
#include<algorithm>

int main(){
	char a[10];
	int c;
	scanf("%d",&c);
	for(int j=0;j<c;j++){
		scanf("%s",a);
		int b[8];
		for(int i=0;i<8;i++){
			b[i]=a[i]-'0';
		}
		std::sort(b,b+8);
		int max=0,min=0;
		for(int i=0;i<8;i++){
			max=max*10+b[7-i];
			min=min*10+b[i];
		}
		printf("%d\n",max-min);
	}
}