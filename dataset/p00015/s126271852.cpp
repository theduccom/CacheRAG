#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	int n,t,i;
	char a[100],b[100],x[100],y[100];
	scanf("%d",&n);
	for(int o=0;o<n;o++){
		t=0;
		scanf("%s %s",a,b);
		for(i=0;a[i]!='\0';i++){}
		for(int j=0;j<i;j++){
			x[j]=a[i-j-1];
		}
		for(;i<100;i++){
			x[i]='0';
		}
		for(i=0;b[i]!='\0';i++){}
		for(int j=0;j<i;j++){
			y[j]=b[i-j-1];
		}
		for(;i<100;i++){
			y[i]='0';
		}
		for(i=0;i<99;i++){
			x[i]+=y[i]-'0';
			if(x[i]>'9'){
				x[i]-=10;
				x[i+1]+=1;
			}
		}
		for(i=99;i>=0;i--){
			if(x[i]!='0' || t){
				t=1;
				if(i>79){
					printf("overflow");
					break;
				}
				printf("%c",x[i]);
			}
		}
		if(!t)printf("0");
		printf("\n");
	}
	return 0;
}