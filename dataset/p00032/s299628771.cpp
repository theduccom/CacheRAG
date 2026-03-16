#include <stdio.h>
#include <algorithm>
using namespace std;

int pow(int a,int n){
	if(n <= 0){
		return 1;
	}
	return a * pow(a,n - 1);
}

int main(){
	int a,b,c;
	int ans1 = 0;
	int ans2 = 0;
	while(scanf("%d,%d,%d",&a,&b,&c) != EOF){
		if(pow(a,2) + pow(b,2) == pow(c,2)){
			ans1++;
		}
		if(a == b){
			ans2++;
		}
	}
		printf("%d\n%d\n",ans1,ans2);
	///////////////////////////////////
	//Sleep(200000);///////////////////// 提出するときは必ず外す！
	///////////////////////////////////
	return 0;

}