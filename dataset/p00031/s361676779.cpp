#include <cstdio>
#include <iostream>
#include <cstring>

using namespace std;

int main(){
	int weight[10] = {1,2,4,8,16,32,64,128,256,512};
	int count[10];
	int n;


	while(cin >> n){
		bool one = 0;
		memset(count,0,sizeof(count));

		while(n != 0){
			int u = 9;
			while(n < weight[u])u--;
			n -= weight[u];
			count[u]++;
		}

		for(int i=0;i<10;i++){
			if(count[i] != 0){
				if(one)printf(" ");
				printf("%d",weight[i]);
				one = 1;
			}
		}
		printf("\n");
	}

}