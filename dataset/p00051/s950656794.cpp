#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int num[8];
	int n, number;
	int min = 0, max = 0;
	
	cin >> n;
	for(int c = 0; c < n; c++){
		min = max = 0;
		cin >> number;
		for(int i = 7; i >= 0; i--){
			num[i] = number % 10;
			number /= 10;
		}
	
		sort(num, num+8);
		for(int i = 0, j = 10000000; i < 8; i++){
			min += num[i] * j;
			j /= 10;
		}
		for(int i = 7, j = 10000000; i >= 0; i--){
			max += num[i] * j;
			j /= 10;
		}
	
		cout << max - min << endl;
	}
	return 0;
}