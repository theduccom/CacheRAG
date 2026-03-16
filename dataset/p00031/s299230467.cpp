// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
#include <set>
using namespace std;

int main(){
	int n;
	set<int> ansset;
	while (cin >> n, !cin.eof()){
		ansset.clear();
		for (int i = 9; i >= 0; i--){
			int hundou = pow(2, i);
			if (n >= hundou){
				ansset.insert(hundou);
				n -= hundou;
			}
		}
		// output
		set<int>::iterator it = ansset.begin();
		while (it != ansset.end()){
			cout << *it;
			++it;
			if (it != ansset.end())	
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}