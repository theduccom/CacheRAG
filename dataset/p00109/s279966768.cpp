#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <utility>
#include <functional>
#include <cstring>
#include <queue>
#include <stack>
#include <math.h>
#include <iterator>
#include <vector>
#include <string>
#include <set>
#include <math.h>
#include <iostream>
#include <random>
#include <map>
#include <fstream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <list>
#include <typeinfo>
#include <list>
#include <set>
#include <assert.h>
#include <complex>
#include <omp.h>
using namespace std;
#define eps 0.000001
#define LONG_INF 100000000000000
#define GOLD 1.61803398874989484820458
#define seg_size 65536*4
#define REP(i,n) for(long long i = 0;i < n;++i)
unsigned long xor128() {
	static unsigned long x = time(NULL), y = 362436069, z = 521288629, w = 88675123;
	unsigned long t = (x ^ (x << 11));
	x = y; y = z; z = w;
	return (w = (w ^ (w >> 19)) ^ (t ^ (t >> 8)));
}
typedef string::const_iterator State;
int expression(State& begin);
int term(State& begin);
int number(State& begin);
int factor(State& begin);
int factor(State& begin) {
	if (*begin == '(') {
		begin++;
		int ret = expression(begin);
		begin++;
	}
	else {
		return number(begin);
	}
}
int expression(State& begin) {
	int ret = term(begin);
	for (;;) {
		if (*begin == '+') {
			begin++;
			ret += term(begin);
		}
		else if (*begin == '-') {
			begin++;
			ret -= term(begin);
		}
		else break;
	}
	return ret;
}
int term(State& begin) {
	int ret = factor(begin);
	for (;;) {
		if (*begin == '*') {
			begin++;
			ret *= factor(begin);
		}
		else if (*begin == '/') {
			begin++;
			ret /= factor(begin);
		}
		else {
			break;
		}
	}
	return ret;
}
int number(State& begin) {
	int ret = 0;
	while (isdigit(*begin)) {
		ret *= 10;
		ret += *begin - '0';
		begin++;
	}
	return ret;
}
int main() {
	long long n;
	cin >> n;
	REP(imt, n) {
		string s;
		cin >> s;
		State begin = s.begin();
		cout << expression(begin) << endl;
	}
	return 0;
}
