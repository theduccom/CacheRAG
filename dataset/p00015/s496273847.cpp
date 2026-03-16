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

	while(i >= 0 && j >= 0){
		temp.push_back((a[i] + b[j] + carry - 2*'0') % 10 + '0');
		carry = (a[i] + b[j] - 2*'0') / 10;
		--i, --j;
	}

	string& longer = i > j ? a : b;
	int& index = i > j ? i : j;
	while(index >= 0){
		temp.push_back((longer[index] + carry - '0') % 10 + '0');
		carry = (longer[index] + carry - '0') / 10;
		--index;
	}

	if(carry){
		temp.push_back('1');
	}

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
		if(t.size() <= 80)
			cout << t << endl;
		else
			cout << "overflow" << endl;
	}


	return 0;
}