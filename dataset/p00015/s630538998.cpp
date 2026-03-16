#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

string sum(string& a, string& b){
	int i = a.length() - 1;
	int j = b.length() - 1;
	int carry = 0;
	string temp;

	while(i >= 0 || j >= 0){
		int c = i >= 0 ? a[i] - '0' : 0;
		int d = j >= 0 ? b[j] - '0' : 0;

		temp.push_back((c + d + carry) % 10 + '0');
		carry = (c+d+carry) / 10;

		--i, --j;
	}

	if(carry)
		temp.push_back('1');

	reverse(begin(temp), end(temp));

	return temp;
}

int main(){
	int n;
	cin >> n;

	vector<string> input(n*2);

	for(int i = 0; i < n*2; i++){
		cin >> input[i];
	}

	for(int i = 0; i < n; i++){
		string t = sum(input[2*i], input[2*i+1]);
		if(t.length() <= 80)
			cout << t << endl;
		else
			cout << "overflow" << endl;
	}

	return 0;
}