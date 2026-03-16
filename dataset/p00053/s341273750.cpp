#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std;

int j;
int prime(){
	int k,fg=0;
	while(1){
		if(j%2==0){
			fg=1;
			j++;
		}
		else{
			k=3;
			while(k<=sqrt(j)){
				if(j%k==0){
					fg=1;
					j++;
					break;
				}
				k+=2;
			}
		}
		if(fg==0){
			j++;
			return j-1;
		}
		fg=0;
	}
}

int main(){
	int p_s[10000];
	p_s[0]=2;
	j=3;
	for(int i=1;i<10000;i++){
		p_s[i]=p_s[i-1]+prime();
	}
	int n;
	while(scanf("%d",&n)){
		if(n==0)
		break;
		printf("%d\n",p_s[n-1]);
	}
}