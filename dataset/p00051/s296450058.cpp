#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

const int MAX_KETA = 8;

int main(){
	int n;
	cin >>n;
	for(int i = 0; i < n; i++){
		int min, max, str[MAX_KETA];
		string input;
		cin >>input;
		for(int j = MAX_KETA - 1, k = 0; j >= 0; j--, k++){
			str[k] = input[j] - '0';
		}
		sort(str, str + MAX_KETA);
		int sum = 0, keta = 1;
		for(int j = 0; j < MAX_KETA; j++){
			sum += str[j] * keta;
			keta *= 10;
		}
		max = sum;
		sum = 0;
		keta = 1;
		for(int j = MAX_KETA - 1; j >= 0; j--){
			sum += str[j] * keta;
			keta *= 10;
		}
		min = sum;
		
		cout <<max - min <<endl;
	}
	return 0;
}