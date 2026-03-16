#include <iostream>
#include <string>
using namespace std;

string solve(string in){
	// sankou
	// http://judge.u-aizu.ac.jp/onlinejudge/review.jsp?rid=499572#1
	string from = "apple";
	string to = "peach";

	for (int i = 0; i < in.length(); i++){
		string sub = in.substr(i, 5);
		if (sub == from)	in.replace(i, 5, to);
		else if (sub == to)	in.replace(i, 5, from);
	}

	return in;
}

int main(){
	string in;
	getline(cin, in);
	cout << solve(in) << endl;
}