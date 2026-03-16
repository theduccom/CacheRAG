//#include<bits/stdc++.h>
#include<iostream>
#include <vector>
#include <cstdio>
#include<algorithm>
#include <utility>
#include<string>
using namespace std;
int main() {
	int  count=0,w, weight[10] = { 512,256,128,64,32,16,8,4,2,1 };
	bool bo[10] = { false };
	while (cin >> w) {
		for (int i = 0; i < 10; i++) {
			if (w == 0) {
				break;
			}
			if (w >= weight[i]) {
				w -= weight[i];
				count++;
				bo[i] = true;
			}
		}
		for (int i = 9; i >= 0; i--) {
			if (bo[i] && count == 1) {
				cout << weight[i] << endl;
				bo[i] = false;
				count = 0;
			}
			else if (bo[i]) {
				count--;
				cout << weight[i] << " ";
				bo[i] = false;
			}
		}
	}
	return 0;
}