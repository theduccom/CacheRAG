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

string rule(int two, int three, int four, int st, map<int, int> table){
	
	if(four == 1) return "four card";
	else if(three == 1){
		if(two == 1) return "full house";
		else return "three card";
	}
	else if(two == 2) return "two pair";
	else if(two == 1) return "one pair";

	for(int i = 0; i < table.size(); i++){
		if(table[i] == st) return "straight";
	}

	return "null";
}

int main(){
	map<int, int> table;
	table[0] = 15;
	table[1] = 20;
	table[2] = 25;
	table[3] = 30;
	table[4] = 35;
	table[5] = 40;
	table[6] = 45;
	table[7] = 50;
	table[8] = 55;
	table[9] = 47;
	
	int tmp = 0;
	while(scanf("%d", &tmp) != EOF){
		vector<int> input;
		input.push_back(tmp);
		for(int i = 0; i < 4; i++){
			scanf(",%d", &tmp);
			input.push_back(tmp);
		}
		
		map<int, int> hand;
		int two = 0, three = 0, four = 0,st = 0;
		
		for(int i = 0; i < 5; i++){
			if(hand.find(input[i]) != hand.end()) hand[input[i]]++;
			else hand[input[i]] = 1;
		}

		for(map<int, int>::iterator it = hand.begin(); it != hand.end(); it++){
			if(it->second == 2) two++;
			else if(it->second == 3) three++;
			else if(it->second == 4) four++;
			st += it->first;
		}

		cout << rule(two, three, four, st, table) << endl;
	}
	return 0;
}