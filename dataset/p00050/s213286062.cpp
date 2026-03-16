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
	string key[] = {"apple", "peach"};
	string input;
	while(getline(cin, input)){
		if(cin.eof()) break;

		stack<int> a, p;
		int k = input.find(key[0]);
		while(true){
			if(k != string::npos) a.push(k);
			else break;
			k = input.find(key[0], k + 5);
		}
		k = input.find(key[1]);
		while(true){
			if(k != string::npos) p.push(k);
			else break;
			k = input.find(key[1], k + 5);
		}

		while(!a.empty()){
			int o = a.top();
			a.pop();
			input.replace(o, 5, key[1]);
		}
		while(!p.empty()){
			int o = p.top();
			p.pop();
			input.replace(o, 5, key[0]);
		}
		
		cout << input << endl;
	}

	return 0;
}