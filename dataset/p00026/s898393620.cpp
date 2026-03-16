#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <array>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>
#include <memory.h>
#include <map>
#include <math.h>
#include <utility>
#include <set>

#pragma warning(disable:4996)
using namespace std;
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;
const double PI = 3.141592653589793238;
const Int INF = 999999999999;
typedef pair<int, int> P;

int S[3][3] = {
		{ 0, 1, 0 },
		{ 1, 1, 1 },
		{ 0, 1, 0 },
};
int M[3][3] = {
		{ 1, 1, 1 },
		{ 1, 1, 1 },
		{ 1, 1, 1 },
};
int L[5][5] = {
		{ 0, 0, 1, 0, 0 },
		{ 0, 1, 1, 1, 0 },
		{ 1, 1, 1, 1, 1 },
		{ 0, 1, 1, 1, 0 },
		{ 0, 0, 1, 0, 0 },
};

int tile[10][10];

int main()
{
	int x, y, size;
	while (scanf("%d,%d,%d", &x, &y, &size) != EOF){
		int a = 0;
		int b = 0;
		int a_ = 0;
		int b_ = 0;
		if (size == 1){
			while (x + a - 1 < 0)++a;
			while (y + b - 1 < 0)++b;
			while (x + 2 + a_ > 10)--a_;
			while (y + 2 + b_ > 10)--b_;

			for (int i = y - 1 + b; i < y + 2 + b_; ++i){
				for (int j = x - 1 + a; j < x + 2 + a_; ++j){
					tile[i][j] += S[i + 1 - y][j + 1 - x];
				}
			}
		}
		if (size == 2){
			while (x + a - 1 < 0)++a;
			while (y + b - 1 < 0)++b;
			while (x + 2 + a_ > 10)--a_;
			while (y + 2 + b_ > 10)--b_;

			for (int i = y - 1 + b; i < y + 2 + b_; ++i){
				for (int j = x - 1 + a; j < x + 2 + a_; ++j){
					tile[i][j] += M[i + 1 - y][j + 1 - x];
				}
			}
		}
		if (size == 3){
			while (x + a - 2 < 0)++a;
			while (y + b - 2 < 0)++b;
			while (x + 3 + a_ > 10)--a_;
			while (y + 3 + b_ > 10)--b_;

			for (int i = y - 2 + b; i < y + 3 + b_; ++i){
				for (int j = x - 2 + a; j < x + 3 + a_; ++j){
					tile[i][j] += L[i + 2 - y][j + 2 - x];
				}
			}
		}
	}
	int white = 0;
	int max_ = -1;

	REP(i, 10){
		REP(j, 10){
			if (!tile[i][j])
				++white;
			max_ = max(tile[i][j], max_);
		}
	}

	cout << white << endl << max_ << endl;

	return 0;

}