#include<iostream>
using namespace std;

int main(){

	int n, zero[20001], cnt_two, cnt_five;

	cnt_two = 0;
	cnt_five = 0;

	for(int i=1; i<=20000; i++){
		n = i;
		while(n % 2 == 0){
			n /= 2;
			cnt_two++;
		}
		n = i;
		while(n % 5 == 0){
			n /= 5;
			cnt_five++;
		}
		zero[i] = min(cnt_two, cnt_five);
	}

	while(cin >> n){
		if(n == 0) break;
		cout << zero[n] << endl;
	}

	return 0;

}