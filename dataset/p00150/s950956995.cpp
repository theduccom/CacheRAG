#include<iostream>
#include<cstring>
using namespace std;

bool p[10001];

void seive(int s){
	for(int i=0;i<=s;i++)p[i]=true;
	p[0]=p[1]=false;
	for(int i=2;i<=s;i++){
		if(p[i]==true){
			for(int j=i*2;j<=s;j+=i)p[j]=false;
		}
	}
}

int main(void){
	seive(10000);
	int n;
	while(1){
		scanf("%d",&n);
		if(n==0)break;
		while(1){
			if(p[n]==true && p[n-2]==true){
				printf("%d %d\n",n-2,n);
				break;
			}
			n--;
		}
	}
    return 0;
}