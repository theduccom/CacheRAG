#include "bits/stdc++.h"
#include<unordered_map>
#pragma warning(disable:4996)
using namespace std;


string st;
int a;

int plmi();

int num() {
	int n = 0;
	while (1) {
		if (isdigit(st[a])) {
			n *= 10;
			n += st[a] - '0';
			a++;
		}
		else {
			return n;
		}
	}
}

int siki() {
	int n;
	if (st[a] == '(') {
		a++;
		n=plmi();
		a++;
	}
	else {
		n = num();
	}
	return n;
}

int evdi() {
	int n = siki();
	while (1) {
		if (st[a] == '*') {
			a++;
			n *= siki();
		}
		else if (st[a] == '/') {
			a++;
			n /= siki();
		}
		else {
			break;
		}
	}
	return n;
}

int plmi() {
	int n=evdi();
	while (1) {
		if (st[a] == '+') {
			a++;
			n += evdi();
		}
		else if (st[a] == '-') {
			a++;
			n -= evdi();
		}
		else {
			break;
		}
	}
	
	return n;
}

int main() {
	int n; cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> st;
		a = 0;
		int ans=plmi();
		cout << ans << endl;
	}
	return 0;
}