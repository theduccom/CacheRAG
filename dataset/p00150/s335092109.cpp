#include<stdio.h>
int table[10001];
int main(){
	for(int i=2;i<10001;i++){
		if(table[i]==0){
			table[i]=1;
			for(int j=i*2;j<10001;j+=i)table[j]=2;
		}
	}
	int a;
	while(scanf("%d",&a),a){
		int max=0;
		for(int i=5;i<=a;i++)if(table[i]==1&&table[i-2]==1)max=i;
		printf("%d %d\n",max-2,max);
	}
}