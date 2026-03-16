#include <stdio.h>
#include <algorithm>
using namespace std;

int ans[101][10];

int pow(int a,int n){
	if(n <= 0){
		return 1;
	}
	return a * pow(a,n - 1);
}

int main(){
	int m;
	int flug = 0;
	while(scanf("%d",&m) != EOF){
		flug = 0;
		for(int j = 0; j < 10; j++){
			

			if((m / pow(2,j)) % 2 == 1){
				if(flug){
				printf(" ");
			}
				printf("%d",pow(2,j));
				flug = 1;
			}
		}
		printf("\n");
	}
	
	///////////////////////////////////
	//Sleep(200000);///////////////////// 提出するときは必ず外す！
	///////////////////////////////////
	return 0;

}