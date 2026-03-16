#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <ctype.h>
#include <string>
#include <iostream>
#include <vector>
#include <stack>
#include <fstream>
#include <sstream>
#include <queue>
#include <exception>
#include <cmath>
#include <numeric>

using namespace std;
typedef long long int lint;

bool AOJ0100() {
	lint n, e, p, q;
	cin >> n;
	if (n == 0) return false;

	lint* data = new lint[4001]; //?£??????????
	bool* output = new bool[4001]; //?????§????????????????????????
	vector<lint> order; //???????????????????????\??????????????????

	for (int i = 0; i <= 4000; i++) {
		data[i] = 0;
		output[i] = false;
	}

	for (lint i = 0; i < n; i++) {
		cin >> e >> p >> q;
		data[e] += p * q;
		order.push_back(e);
	}

	bool flag = false;
	for (auto itr = order.begin(); itr != order.end(); itr++) {
		if (output[*itr]) continue;
		if (data[*itr] >= 1000000) {
			flag = true;
			output[*itr] = true;
			cout << *itr << endl;
		}
	}
	if (!flag) cout << "NA" << endl;

	delete[] data;
	delete[] output;
	return true;
}

int main()
{
	while (AOJ0100()) {
	}
	return 0;
}