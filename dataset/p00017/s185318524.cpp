// #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

string nextChar(string in){
	for (int i = 0; i < in.length(); i++){
		// アルファベットなら
		if (in[i] >= 97 && in[i] <= 122){
			// 次に進める
			in[i]++;
			if (in[i] == 123)	in[i] = 97;
		}
	}
	return in;
}

int main(){
	string in;
	while (getline(cin, in)){
		while (1){
			in = nextChar(in);
			if (in.find("the") != string::npos || 
				in.find("this") != string::npos || 
				in.find("that") != string::npos){
				cout << in << endl;
				break;
			}
		}
	}
	return 0;
}