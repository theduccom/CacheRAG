#include<iostream>
#include<stdio.h>

using namespace std;


int main(){
	int price,stock,sum_price=0,sum_stock=0,i=0;
	char gomi;
	while(cin >> price >> gomi >> stock){
		i++;
		sum_price += price*stock;
		sum_stock += stock;
	}
	sum_stock = sum_stock * 10 / i;
	if(sum_stock%10 >= 5){
		sum_stock += 10;
	}
	sum_stock /= 10;
		

	cout << sum_price << endl << sum_stock << endl;
}