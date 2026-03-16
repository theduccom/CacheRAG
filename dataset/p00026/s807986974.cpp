#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string>
#include<queue>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;
int pap[10][10] = { 0 };
void big( int, int);
void medium(int, int);
void small(int, int);
int sx[5] = { 0,1,-1,0,0 }, sy[5] = { 0,0,0,1,-1 };
int mx[4] = { 1,1,-1,-1 }, my[4] = { 1,-1,1,-1 };
int bx[4] = { 0,0,2,-2 }, by[4] = { 2,-2,0,0 };
int nana = 100;
int main() {
	string str;
	while (cin >> str) {
		if (str[4] == '1') small(str[0]-'0', str[2] - '0');
		else if (str[4] == '2')medium(str[0]-'0', str[2] - '0');
		else if (str[4] == '3')big(str[0] - '0', str[2] - '0');
	}
	int max = -1;
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (max < pap[i][j])max = pap[i][j];
		}
	}
	cout << nana << endl << max << endl;
	return 0;
}
void big( int x, int y) {
	for (int i = 0; i < 5; ++i) {
		if (x + sx[i] >= 0 && x + sx[i] < 10 && y + sy[i] >= 0 && y + sy[i] < 10) {
			if (pap[x + sx[i]][y + sy[i]]==0) nana--;
			pap[x + sx[i]][y + sy[i]]++;
		}
	}
	for (int i = 0; i < 4; ++i) {
		if (x + mx[i] >= 0 && x + mx[i] < 10 && y + my[i] >= 0 && y + my[i] < 10) {
			if (pap[x + mx[i]][y + my[i]]==0) nana--;
			pap[x + mx[i]][y + my[i]]++;
		}
	}
	for (int i = 0; i < 4; ++i) {
		if (x + bx[i] >= 0 && x + bx[i] < 10 && y + by[i] >= 0 && y + by[i] < 10) {
			if (pap[x + bx[i]][y + by[i]] == 0) nana--;
			pap[x + bx[i]][y + by[i]]++;
		}
	}
	return;
}
void medium( int x, int y) {
	for (int i = 0; i < 5; ++i) {
		if (x + sx[i] >= 0 && x + sx[i] < 10 && y + sy[i] >= 0 && y + sy[i] < 10) {
			if (pap[x + sx[i]][y + sy[i]] == 0) nana--;
			pap[x + sx[i]][y + sy[i]]++;
		}
	}
	for (int i = 0; i < 4; ++i) {
		if (x + mx[i] >= 0 && x + mx[i] < 10 && y + my[i] >= 0 && y + my[i] < 10) {
			if (pap[x + mx[i]][y + my[i]] == 0) nana--;
			pap[x + mx[i]][y + my[i]]++;
		}
	}
	return;
}
void small( int x, int y) {
	for (int i = 0; i < 5; ++i) {
		if (x + sx[i] >= 0 && x + sx[i] < 10 && y + sy[i] >= 0 && y + sy[i] < 10) {
			if (pap[x + sx[i]][y + sy[i]] == 0) nana--;
			pap[x + sx[i]][y + sy[i]]++;
		}
	}
	return;
}
