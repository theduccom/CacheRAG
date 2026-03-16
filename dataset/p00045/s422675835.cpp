#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
	int num;
	int sum;
	int sell;
	int pluss;
	int tanka;
	int suryo;
	
	num = 0;
	sell = 0;
	sum = 0;
	while ( ~scanf("%d,%d", &tanka,&suryo) ) {
		num++;
		sell += suryo;
		sum += tanka * suryo;
	}
	
	if ( (sell % num) * 10 >= 5 )
		pluss = 1;
	else 
		pluss = 0;
	cout << sum << endl << sell / num + pluss << endl;
}