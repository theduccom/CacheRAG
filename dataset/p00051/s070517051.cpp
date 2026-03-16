#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <functional>
#include <cstdio>
using namespace std;

int solve(int in){
	char mozi[9] = {};
	int max, min;
	// itoa(in, mozi, 10);
	sprintf(mozi, "%d", in);

	sort(mozi, mozi + 8);
	min = atoi(mozi);

	sort(mozi, mozi + 8, greater<int>());
	max = atoi(mozi);
	
	return abs(max - min);
}


int main(){
	int n,in;

	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> in;
		cout << solve(in) << endl;
	}

	return 0;
}