#include <iostream>
using namespace std;

int judge(int num){
	int count = 0;
	int n = 5;
	while(n <= num){
		count += num / n;
		n = n * 5;
	}
	return count;
}

int main(){
	int n;
	while(cin >> n){
		if(n == 0) break;
		cout << judge(n) << endl;
	}
	return 0;
}