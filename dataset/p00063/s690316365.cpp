// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

bool solve(string in){
	string rev_in = in;
	reverse(rev_in.begin(), rev_in.end());
	if (in == rev_in)	return true;
	else return false;
}

int main(){
	string in;
	int count = 0;
	while (cin >> in, !cin.eof()){
		if (solve(in))	count++;
	}
	cout << count << endl;
	return 0;
}