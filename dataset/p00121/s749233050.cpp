#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <stdio.h>
#include <ctype.h>
#include <string>
#include <iostream>
#include <vector>
#include <stack>
#include <fstream>
#include <sstream>
#include <queue>
#include <exception>
#include <cmath>
#include <numeric>
#include <map>
#include <algorithm>
#include <bitset>
#include <set>
#include <functional>

using namespace std;
typedef long long int lint;

string swap(string state, int i, int j) {
	char buf = state[i];
	state[i] = state[j];
	state[j] = buf;
	return state;
}

int getpos0(string state) {
	for (int i = 0; i < state.size(); i++) {
		if (state[i] == '0') return i;
	}
	return -1;
}

map<string, int> dp;

void addNextState(string state, queue<string>& states) {
	int pos0 = getpos0(state);
	switch (pos0)
	{
	case 0:
		states.push(swap(state, 0, 1));
		states.push(swap(state, 0, 4));
		break;
	case 1:
		states.push(swap(state, 1, 0));
		states.push(swap(state, 1, 2));
		states.push(swap(state, 1, 5));
		break;
	case 2:
		states.push(swap(state, 2, 1));
		states.push(swap(state, 2, 3));
		states.push(swap(state, 2, 6));
		break;
	case 3:
		states.push(swap(state, 3, 2));
		states.push(swap(state, 3, 7));
		break;
	case 4:
		states.push(swap(state, 4, 0));
		states.push(swap(state, 4, 5));
		break;
	case 5:
		states.push(swap(state, 5, 1));
		states.push(swap(state, 5, 4));
		states.push(swap(state, 5, 6));
		break;
	case 6:
		states.push(swap(state, 6, 2));
		states.push(swap(state, 6, 5));
		states.push(swap(state, 6, 7));
		break;
	case 7:
		states.push(swap(state, 7, 3));
		states.push(swap(state, 7, 6));
	default:
		break;
	}
}

bool AOJ0121()
{
	string input;
	if (!getline(cin, input)) return false;

	istringstream iss(input);
	
	char buf;
	string state;
	while (iss >> buf) {
		state += buf;
	}
	
	cout << dp[state] << endl;
	
	return true;
}

int main()
{
	string str = "01234567";

	queue<string> qu;
	qu.push(str);

	int step = 0;
	while (step < 37) {
		int sz = qu.size();
		for (int i = 0; i < sz; i++) {
			//??????????????????
			if (dp.find(qu.front()) == dp.end()) {
				dp[qu.front()] = step;
				addNextState(qu.front(), qu);
			}

			qu.pop();
		}
		step++;
	}

	while (AOJ0121()) {

	}

	return 0;
}