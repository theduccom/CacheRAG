#include<iostream>
#include<stdio.h>
#include<vector>
#include<utility>
#include<queue>
#include<math.h>
#include<string>
#include<typeinfo>
using namespace std;
typedef pair<int, int> P;
int main() {
	int tyo = 0, hisi = 0,a, b, c;
	char ch;
	string str;
	while (cin >> a >> ch >> b >> ch >> c) {
		 if (pow(c, 2) == pow(b, 2) + pow(a, 2))tyo++;
		 if (a == b)hisi++;
	}
	cout << tyo << endl << hisi << endl;

	return 0;
}
