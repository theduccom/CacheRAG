#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main() {
	int price;
	int total_price=0;
	int num;
	int total_num = 0;
	double kaisuu=0.0;
	while(scanf("%d,%d",&price,&num)!=EOF){
		total_price = total_price + price*num;
		total_num = total_num + num;
		kaisuu++;
	}
	int x = roundf(total_num / kaisuu);
	cout << total_price << endl << x << endl;
}