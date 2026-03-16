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

#define X first
#define Y second
using namespace std;

int main(){
	double a;
	while(cin >> a){
		if(cin.eof()) break;
		double sum = a;
		for(int i = 2; i <= 10; i++){
			if(i%2) a /= 3.0;
			else a *= 2.0;
			sum += a;
		}
		printf("%0.8f\n", sum);
	}
	return 0;
}