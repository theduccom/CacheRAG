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



int dy[] = { 0, 0, 1, -1, 0 };
int dx[] = { 1, -1, 0, 0, 0 };


double N = 0;
int goal[2];
int M = 0;
vector<vector<int>>MV;


void input(void) {

	return;
}


int main(void) {
	double sum = 0;
	double num = 0;

	while (CI N) {
		sum += N;
		num = N;
		for (int i = 2; i <= 10; i++) {
			if (i % 2 == 0) {
				sum += num * 2;
				num *= 2;
			}
			if (i % 2 == 1) {
				sum += num / 3.0;
				num /= 3.0;
			}
		}
		printf("%.7f\n", sum);
		sum = 0;
		num = 0;
	}


	return 0;
}