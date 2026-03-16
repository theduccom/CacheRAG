#include <iostream>
#include <algorithm>

using namespace std;

vector<int> string_to_large_int(const string& str){
	vector<int> v;
	for(auto it = str.rbegin(); it != str.rend(); ++it){
		v.push_back(*it - '0');
	}
	return v;
}

string large_int_to_string(const vector<int>& v){
	string str;
	for(auto it = v.rbegin(); it != v.rend(); ++it){
		str += (char)*it + '0';
	}
	return str;
}

vector<int> add_large_int(const vector<int>& a, const vector<int>& b){
	vector<int> c;
	int carry = 0;
	for(int i = 0; i < max(a.size(), b.size()); ++i){
		int x = i < a.size() ? a[i] : 0;
		int y = i < b.size() ? b[i] : 0;
		int z = x + y + carry;
		c.push_back(z % 10);
		carry = z / 10;
	}
	if(carry != 0){
		c.push_back(carry);
	}
	return c;
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		string str;
		cin >> str;
		auto a = string_to_large_int(str);
		cin >> str;
		auto b = string_to_large_int(str);

		auto c = add_large_int(a, b);

		if(c.size() <= 80){
			cout << large_int_to_string(c) << endl;
		}
		else{
			cout << "overflow" << endl;
		}
	}
	return 0;
}