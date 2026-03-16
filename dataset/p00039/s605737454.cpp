#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <math.h>

#define PREP(i, m, n) for(int i = m; i < n; i++)
#define MREP(i, m, n) for(int i = m - 1; i >= n; i--)

#define rep(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, b) for(int i = a; i < b; i++)
#define all(v) v.begin(), v.end()
#define rev(v) v.rbegin(), v.rend()
#define prime first
#define weight second
#define MP make_pair
#define PB push_back

using namespace std;

int main(){
	map<char, int> table;
	table['I'] = 1;
	table['V'] = 5;
	table['X'] = 10;
	table['L'] = 50; 
	table['C'] = 100;
	table['D'] = 500;
	table['M'] = 1000;
	string input;
	while(cin >> input){
		int result = 0;
		if(cin.eof()) break;

		for(int i = 0; i < input.size(); i++){
			if(i ==  input.size() - 1){
				result += table[input[i]];
				break;
			}
			if(table[input[i]] < table[input[i + 1]]) result -= table[input[i]];
			else result += table[input[i]];
		}

		cout << result << endl;
	}

	return 0;
}