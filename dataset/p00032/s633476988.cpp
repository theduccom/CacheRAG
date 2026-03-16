#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

#define TYO 0
#define HIS 1

int main(){
	int in1, in2, in3;
	int ans[2] = {};

	while (scanf("%d,%d,%d", &in1, &in2, &in3) != EOF){
		// 長方形check
		if (pow(in1, 2) + pow(in2, 2) == pow(in3, 2)){
			ans[TYO]++;
		}
		else if (in1 == in2){
			ans[HIS]++;
		}
	}
	for (int i = 0; i < 2; i++){
		cout << ans[i] << endl;
	}

	return 0;
}