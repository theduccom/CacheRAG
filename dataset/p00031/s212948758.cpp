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

bool W_b[10] = { false };
int W[] = { 1, 2, 4, 8 ,16, 32, 64, 128, 256, 512 };

void input(void) {
	CI N;
	return;
}


int main(void) {
	int nn = 0;
	while (CI N) {
		for (int i = 9; i >= 0; i--) {
			if (W[i] <= N) {
				N -= W[i];
				W_b[i] = true;
				nn++;
			}
		}
		int x = 0;
		for (int i = 0; i < 10; i++) {
			if (W_b[i] == true) {
				x++;
				CO W[i];
				if (x < nn)CO " ";
				W_b[i] = false;
			}
		}
		CO "\n";
	
		nn = 0;
	}
	

	
	return 0;
}