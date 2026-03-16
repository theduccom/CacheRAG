#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<stack>
#include<queue>

using namespace std;

int main(){
	int fig[8];
	while(cin>>fig[0]){
		for(int i=1;i<8;i++) cin>>fig[i];
		for(int i=0;i<8;i++){
			if(fig[i]!=0){
				if(fig[i]==fig[i+1]&&fig[i]%11==0)
				printf("A\n");
				else if(fig[i]==fig[i+1]&&fig[i]==fig[i+2])
				printf("B\n");
				else if(fig[i]%1111==0)
				printf("C\n");
				else if(fig[i+1]==fig[i]*10+fig[i])
				printf("D\n");
				else if(fig[i+1]==fig[i]/10)
				printf("E\n");
				else if(fig[i+1]==fig[i]+fig[i]/10)
				printf("F\n");
				else if(fig[i+1]==fig[i]*10)
				printf("G\n");
				break;
			}
		}
	}
}
