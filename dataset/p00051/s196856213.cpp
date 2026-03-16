#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int int_pow(int n, int m){
	int ans = 1;
	while (m--){
		ans *= n;
	}
	return ans;
}

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		int max = 0, mini = 0;
		char input[8];
		for (int j = 0; j < 8; j++){
			cin >> input[j];
			input[j] -= '0';
		}
		sort(input, input + 8);
		for (int j = 0; j < 8; j++){
			mini += input[j] * int_pow(10, 7 - j);
			max += input[j] * int_pow(10, j);
		}
		printf("%d\n", max - mini);
	}
}