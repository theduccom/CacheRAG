#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <stdio.h>

using namespace std;

int pat[3][3];
int len[3];
int chr[3];
int zure;
int size;
bool atteru[3];
char text[100];
char ptext[100];

int main() {
	//cin >> text;
	while (gets(text)) {
		bool flag = false;
		for (int i = 0; i < size; i++) {
			if (text[i] != ptext[i]) break;
			if (i == size-1) flag = true;
		}
		if (flag) break;
	//int size = text.size();
	int pt = 0;
	size = 100;

	pat[0][0] = 't' - 'h';
	pat[0][1] = 'h' - 'e';
	pat[1][0] = 't' - 'h';
	pat[1][1] = 'h' - 'i';
	pat[1][2] = 'i' - 's';
	pat[2][0] = 't' - 'h';
	pat[2][1] = 'h' - 'a';
	pat[2][2] = 'a' - 't';
	chr[0] = 'e';
	chr[1] = 's';
	chr[2] = 't';
	len[0] = 3;
	len[1] = 4;
	len[2] = 4;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (pat[i][j] < 0) pat[i][j] += 26;
		}
	}

	zure = -1;

	int cnt = 0;
	atteru[0] = true;
	atteru[1] = true;
	atteru[2] = true;
	for (int i = 0; i < size-1 && zure == -1; i++) {
		if (text[i] == ' ') {
			cnt = 0;
			atteru[0] = true;
			atteru[1] = true;
			atteru[2] = true;
			//cout << "yarinaoshi!" << endl;
			continue;
		}
		if (text[i+1] == ' ' || cnt > 3) continue;
		int dist = text[i] - text[i+1];
		if (dist < 0) dist += 26;
		for (int j = 0; j <= 2; j++) {
			if (!atteru[j]) continue;
			if (cnt >= len[j]-1) continue;
			if (dist != pat[j][cnt]) {
				atteru[j] = false;
				//cout << j << " ha tigau!" << endl;
				continue;
			} else if (cnt == len[j]-2) {
				if (text[i+2] == ' ') {
					//cout << j << " ha atteta!" << endl;
					zure = text[i+1] - chr[j];
					if (zure < 0) zure += 26;
					//cout << "zure = " << zure << endl;
				} else {
					atteru[j] = false;
					continue;
				}
			}
		}
		cnt++;
	}

	for (int i = 0; i < size; i++) {
		if (text[i] == EOF) break;
		if (text[i] < 'a' || text[i] > 'z') continue;
		text[i] = text[i] - zure;
		if (text[i] < 'a') text[i] += 26;
	}

	cout << text << endl;
	}

	return 0;
}

/*@@@@@@@@@@@@@@@@@@@@@@@@@*/
/*@                       @*/
/*@ debug output erased ? @*/
/*@                       @*/
/*@@@@@@@@@@@@@@@@@@@@@@@@@*/