#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string>
#include <vector>
#include <cctype>
#include <cstdio>
#include <iomanip>
#include <functional>
#include <stack>
#include <numeric>
#include <utility>
#include <queue>
#define PI 3.1415926535
#define FOR(i,n) for (int i=1; i<(n) ;i++)
#define INF 114514810

using namespace std;

int n, t, ans = 0;
int c2 = 0, c5 = 0;

int main(){
	while (true){
		cin >> n;
		if (n == 0) break;
		FOR(i, n + 1){
			t = i;
			while (t % 2 == 0){
				t /= 2;
				c2++;
			}
			t = i;
			while (t%5==0) {
				t /= 5;
				c5++;
			}
		}
		cout << min(c2, c5) << endl;
		c2 = c5 = 0;
	}
}