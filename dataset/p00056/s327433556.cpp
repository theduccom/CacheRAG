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
#include <cstring>

#define X first
#define Y second
using namespace std;

void era(bool *table){
	for(int i = 2; i <= 50000; i++){
		if(table[i]){
			for(int j = i*2; j <= 50000; j+=i){
				table[j] = false;
			}
		}
	}
}

int main(){
	bool table[50001];
	memset(table, true, sizeof(table));
	table[0] = false;
	table[1] = false;
	era(table);
	int n;
	while(cin >> n && n != 0){
		int count = 0;
		for(int i = 2; i <= n; i++){
			if(!table[i]) continue;
			if(table[n-i]) count++;
			if(i==n-i) count++;
		}
		cout << count/2 << endl;
	}
	return 0;
}