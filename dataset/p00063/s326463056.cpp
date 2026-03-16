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
#include <cstring>
using namespace std;

bool check(string &in){
	for(int i = 0; i <= in.size()/2; i++){
		if(in[i] != in[in.size()-1-i]) return false;
	}
	return true;
}

int main(){
	string in;
	int count = 0;
	while(cin >> in){
		if(cin.eof()) break;
		if(check(in)) count++;
	}
	cout << count << endl;
	return 0;
}