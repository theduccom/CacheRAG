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

	vector<int> zeronum;
	zeronum.push_back(0);
	int count = 0;
	for(int i = 1; i <= 5000000; i++){
		int tmp = i;
		while(tmp % 5 == 0){
			count++;
			tmp /= 5;
		}
		zeronum.push_back(count);
	}

	int n = 0;
	while(cin >> n && n != 0){
		cout << zeronum[n] << endl;
	}
	return 0;
}