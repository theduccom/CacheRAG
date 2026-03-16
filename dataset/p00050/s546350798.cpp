//#include<bits/stdc++.h>
#include<iostream>
#include <vector>
#include <cstdio>
#include<algorithm>
#include <utility>
#include<string>
using namespace std;
int main() {
	int i=0, j=0;
	string str[10000] = { "" };
	char ch[10000];
	while (1) {
		scanf("%c", &ch[i]);
		if (ch[i] == '\n') {
			break;
		}
		else if (ch[i] == ' ') {
			j++;
		}
		else {
			str[j] += ch[i];
		}
		i++;
	}int memoa,memop;
	for (int l = 0; l <= j; l++) {
		memoa = str[l].find("apple");
		memop = str[l].find("peach");
		if (memoa != -1) {
			str[l].replace(memoa,5,"peach");
		}
		if (memop != -1) {
			str[l].replace(memop, 5, "apple");
		}
		if (l == j ) {
			cout << str[l] << endl;
		}
		else {
			cout << str[l] << " ";
		}
	}
	return 0;
}