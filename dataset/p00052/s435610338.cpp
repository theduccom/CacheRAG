#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>

using namespace std;

int main()
{
	int n, j;
	int cnt;
	int tmp;


	while(1) {
		cin >> n;
		if (n == 0) break;
		j = 5;
		cnt = 0;
		while (j <= n) {
			tmp = j;
			while(tmp % 5 == 0) {
				tmp /= 5;
				cnt++;
			}
			j += 5;
		}
		cout << cnt << endl;
	}

	

	return (0);
}