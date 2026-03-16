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

void tamesiwari(long long *p){
	p[0] = 2;
	int count = 1;
	for(int i = 3; i < 110000; i+=2){
		bool f = true;
		for(int j = 3; i >= j*j; j+=2){
			if(i%j == 0){
				f = false;
				break;
			}
		}
		if(f){
			p[count] = i;
			count++;
		}
		if(count == 10000)break;
	}
}

int main(){
	long long p[10000] = {0};
	tamesiwari(p);
	int n;
	while(cin >> n && n != 0){
		int sum = 0;
		for(int i = 0; i < n; i++){
			sum += p[i];
		}
		cout << sum << endl;
	}
	return 0;
}