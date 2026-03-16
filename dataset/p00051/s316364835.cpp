#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main(){
	char input[8];
	int minNum, maxNum;
	int num;

	cin >> num;
	for(int i=0; i < num; i++){
		cin >> input;
		sort(input, input+8);
		minNum = atoi(input);
		sort(input, input+8 , greater<int>());
		maxNum = atoi(input);
		cout << maxNum - minNum << endl;
	}
}