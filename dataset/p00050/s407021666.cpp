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

void stackPos(string &input, stack<int> &st, string key){
	int k = input.find(key);
	while(true){
		if(k != string::npos) st.push(k);
		else break;
		k = input.find(key, k + 5);
	}
}

void replace(string &input, stack<int> &st, string key){
	while(!st.empty()){
		int k = st.top();
		st.pop();
		input.replace(k, 5, key);
	}
}

int main(){
	string key[] = {"apple", "peach"};
	string input;
	while(getline(cin, input)){
		if(cin.eof()) break;

		stack<int> a, p;
		stackPos(input, a, key[0]);
		stackPos(input, p, key[1]);

		replace(input, a, key[1]);
		replace(input, p, key[0]);
		
		cout << input << endl;
	}

	return 0;
}