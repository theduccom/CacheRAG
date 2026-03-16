#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <cstdio>
#include <string>
using namespace std;

int toNum(char a){
	if (a == 'I')		return 1;
	else if (a == 'V')	return 5;
	else if (a == 'X')	return 10;
	else if (a == 'L')	return 50;
	else if (a == 'C')	return 100;
	else if (a == 'D')	return 500;
	else if (a == 'M')	return 1000;
	else return 0;
}

int solve(string in){
	int ans = 0;
	for (int i = 0; i < in.length(); i++){
		int first = toNum(in[i]);
		int second = -1;
		if (i < in.length() - 1){
			second = toNum(in[i + 1]);
		}
		if (first < second){
			ans += (second - first);
			i++;
		}
		else{
			ans += first;
		}
	}

	return ans;
}

int main(){
	string in;

	while (cin >> in, !cin.eof()){
		cout << solve(in) << endl;
	}

	return 0;
}