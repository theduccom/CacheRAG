#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

int nowPlace(int in[], int now, int miFlag){
	int p = 0, m = 0, ptr = 0;
	if (miFlag == 0){
		while (p <= now){
			p += in[ptr];
			ptr++;
		}
		return ptr;
	}
	else{
		ptr = 9;
		while (m <= now){
			m += in[ptr];
			ptr--;
		}
		ptr += 2;
		return ptr;
	}
}

int solve(int in[]){
	cout << "nowSolve" << endl;
	int plusV = in[10];
	int miV = in[11];
	int minFlag = 0,  SA = plusV - miV;
	if (SA < 0)	minFlag = 1;
	// 現在位置
	int nowPlus = 0, nowMi = 0;
	for (int i = 0; i < 10; i++)	in[i] *= 1000;
	while (1){
		nowPlus++;
		nowMi++;
		if (minFlag)	nowMi += -SA;
		else			nowPlus += SA;
		cout << "nowPlus = " << nowPlus << " , nowMi = " << nowMi << endl;
		cout << "nowPlace plus = " << nowPlace(in, nowPlus, 0) << " , nowPlace mi = " << nowPlace(in, nowMi, 1) << endl;
		if (nowPlace(in, nowPlus, 0) >= nowPlace(in, nowMi, 1))
			return nowPlace(in, nowPlus, 0);
	}

}

int solve2(int in[]){
	int longSum = 0, v1 = in[10], v2 = in[11];
	int ptr = 0;
	double temp = 0;
	for (int i = 0; i < 10; i++)	longSum += in[i];
	// (左端0としたときの)すれちがう位置
	temp = (double)(longSum * v1) / (v1 + v2);
	while (temp > 0){
		temp -= in[ptr];
		ptr++;
	}
	return ptr;
}

int main(){
	int in[13];
	while (scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",
		&in[0], &in[1], &in[2], &in[3], &in[4], &in[5], &in[6], &in[7], &in[8], &in[9], &in[10], &in[11])
		!= EOF){
		cout << solve2(in) << endl;
	}
	return 0;
}