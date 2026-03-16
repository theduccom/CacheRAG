#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>
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

int A = 0, B = 0, C = 0, K = 0, S = 0, T = 0, W = 0, N = 0;
int n = 0;
double ar = 0, br = 0, cr = 0;
int answer = 0;

string c;
string sA, strB;
vector<string> city;
vector<int> population;


void input() {
	CI c;
	
}

int main(void) {
	
	int HIT = 0;
	int OUT = 0;
	bool HOMERUN = false;
	int point = 0;

	CI n;
	REP(i, n) {
		while (true) {
			CI c;
			if (c == "HIT") {
				HIT++;
			}
			if (c == "OUT") {
				OUT++;
			}
			if (c == "HOMERUN") {
				HOMERUN = true;
			}

			if (HIT == 4) {
				point++;
				HIT--;
			}
			if (HOMERUN == true) {
				point += HIT + 1;
				HIT = 0;
				HOMERUN = false;
			}
			if (OUT == 3) {
				HIT = 0;
				OUT = 0;
				break;
			}
		}
		CO point E
		point = 0;
	}
	

	return 0;
}