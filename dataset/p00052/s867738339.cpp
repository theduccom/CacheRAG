// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;


int solve(int n){
	// n!を素因数分解して5*2 のセットが何個あるか.
	// 　n! = n * (n-1) * (n-2) * ... * 1 に5が何個含まれているか
	//     n / 5 で、nまでの各数字の中で5の倍数がいくつあるかわかる
	//       その5の倍数は、さらに多くの5を含んでいる可能性があるよー 100とか.

	// if n=10000
	//  10000 / 5 = 2000  2000個の5の倍数がある
	//   n=2000           その2000個について、さらに5が素因数として含まれているか見る(他は5の倍数ではない)
	//    2000 / 5 = 400  400個の5の倍数がある　素因数「5」がまだ400個あった
	//     n=400
	//      n / 5 = 80 , 80/5=16 , 16/5=3 , 3/5=no
	//       素因数「5」の個数は  2000 + 400 + 80 + 16 + 3 = 2499.

	int ans = 0;

	while (1){
		int temp = n / 5;
		if (temp == 0)	break;
		else
		{
			ans += temp;
			n /= 5;
		}
	}
	return ans;
}


int main(){
	int n;
	while (cin >> n, n){
		cout << solve(n) << endl;
	}

	return 0;
}