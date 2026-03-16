#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	int sum = 0, ave = 0, goods_sum, goods_n, cntgoods = 0;
	while (scanf("%d,%d", &goods_sum, &goods_n) != EOF){
		sum += goods_sum * goods_n; ave += goods_n;
		cntgoods++;
	}
	printf("%d\n%d\n", sum, (int)((double)ave / cntgoods + 0.5));
	return 0;
}