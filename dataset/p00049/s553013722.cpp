#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <bitset>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
	map<string, int> table;

	string blood;
	char c;
	int num;
	while(cin >> num >> c >> blood){
		if(cin.eof()) break;
		if(table.count(blood)) table[blood]++;
		else table[blood] = 1;
	}
	cout << table["A"] << endl << table["B"] << endl << table["AB"] << endl << table["O"] << endl;
	return 0;
}