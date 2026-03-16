#include<iostream>
using namespace std;

int main(){
	int price, num;
	int totalPrice = 0, average;
	float totalNum = 0;
	char hoge;
	float count = 0;
	while(cin >> price >> hoge >> num){
		totalPrice += price * num;
		totalNum += num;
		count++;
	}

	float huga = totalNum/count - (int)(totalNum/count);
	if(0.5 <= huga) average = totalNum/count + 1;
	else average = totalNum/count;
	cout << totalPrice << "\n" << average << endl;

}