#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
#include<string.h>
#include<vector>
#include<math.h>
#include<queue>
#include <algorithm>
#include<functional>
#include<cstdlib>
#include<cmath>


#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define CI cin >>
#define CO cout <<
#define E << endl;

using namespace std;

typedef pair<int, int> P;
typedef pair<long, long> LP;
typedef pair<int, P> PP;
typedef pair<long, LP> LPP;

int N;

int dy[] = { 0, 0, 1, -1, 0 };
int dx[] = { 1, -1, 0, 0, 0 };

string name;

int a, b, c, d;

int number[100005] = { 0 };

int h[100005] = { 0 };
int w[100005] = { 0 };

int max_count = 0;

void input(void) {
	CI N;
	
}
int main(void) {
	int cost = 0;
	int num = 0;
	int sum_c = 0;
	int sum_n = 0;
	int i = 0;
	
	while (scanf("%d,%d", &cost, &num) != EOF) {
		sum_c += cost * num;
		sum_n += num;
		i++;
	}

	CO sum_c E
	
	CO (int)((double)sum_n / (double)i + 0.5) E

	
	return 0;
}