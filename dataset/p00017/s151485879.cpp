#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

bool is_comprehensible(const string& str){
	istringstream iss(str);
	string word;
	while(iss >> word){
		if(word == "the" || word == "this" || word == "that"){
			return true;
		}
	}
	return false;
}

string shift_string(const string& str, char n){
	string result;
	for(auto& v: str){
		if('a' <= v && v <= 'z'){
			result += (v - 'a' + n) % 26 + 'a';
		}
		else{
			result += v;
		}
	}
	return result;
}

int main(){
	string str;
	while(getline(cin, str)){
		for(int i = 0; i < 26; ++i){
			auto shifted = shift_string(str, i);
			if(is_comprehensible(shifted)){
				cout << shifted << endl;
				break;
			}
		}
	}
	return 0;
}