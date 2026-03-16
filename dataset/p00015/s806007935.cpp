#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for(int k = 0; k < n; k++) {
		string str1, str2;
		cin >> str1 >> str2;
		int a = str1.size(), b = str2.size();
		if(a > 80 || b > 80) {
			cout << "overflow" <<endl;
		} else if(a >= b) {
			for(int i = 0; i < b; i++) {
				str1[a - b + i] += str2[i] - '0';
				for(int i = a - 1; i >= 0; i--) {
					if(str1[i] > '9') {                 //?????????//
						if(i != 0) {
							str1[i] = str1[i] - ':' + '0';
							str1[i - 1] = str1[i - 1] + 1;
						}
					}
				}
			}
			if(a == 80 && str1[0] > '9') {
				cout << "overflow" <<endl;
			} else {
				for (int j = 0; j < a; j++) {
					if(str1[j] > '9') {
						printf("%d",str1[j] - '0');
					} else cout<< str1[j];
				}
				cout <<endl;
			}
		} else if(b > a) {
			for(int i = 0; i < a; i++) {
				str2[b - a + i] += str1[i] - '0';
				for(int i = b - 1; i >= 0; i--) {
					if(str2[i] > '9') {                    //?????????//
						if(i != 0) {
							str2[i] = str2[i] - ':' + '0';
							str2[i - 1] = str2[i - 1] + 1;
						}
					}
				}
			}
			if(b == 80 && str2[0] > '9') {
					cout << "overflow" <<endl;
			} else {
				for (int j = 0; j < b; j++) { 
					if(str2[j] > '9') {
						printf("%d",str2[j] - '0');
					} else cout << str2[j];
				}
				cout << endl;
			}
		}
	}
	return 0;
}