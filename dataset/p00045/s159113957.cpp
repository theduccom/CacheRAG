#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){

	int sum = 0, cost = 0, num = 0, iAve = 0;
	double dAve = 0, count = 0, totalnum = 0; 
	while(scanf("%d,%d", &cost, & num) != EOF){
		sum += cost * num;
		totalnum += num;
		count++;
	}

	dAve = totalnum / count;
	int tmp = dAve * 10;
	iAve = tmp % 10 >= 5 ? dAve + 1 : dAve;

	cout << sum << endl << iAve << endl;

	return 0;
}