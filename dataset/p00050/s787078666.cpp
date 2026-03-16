#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void print(string s){
	static const string t("apple");
	static const string t2("peach");
	string::iterator iter = search(s.begin(), s.end(), t.begin(), t.end());
	string::iterator iter2 = search(s.begin(), s.end(), t2.begin(), t2.end());
	if(iter != s.end()){
		for(string::iterator it = s.begin(); it != s.end(); it++){
			if(it == iter){
				cout << t2;
				it += 4;
			}else{
				cout << *it;
			}
		}
	}else if(iter2 != s.end()){
		for(string::iterator it = s.begin(); it != s.end(); it++){
			if(it == iter2){
				cout << t;
				it += 4;
			}else{
				cout << *it;
			}
		}
	}else{
		cout << s;
	}
}

int main(){
	vector<string> vs;
	string s;
	while(cin >> s) vs.push_back(s);
	for(vector<string>::size_type i = 0; i < vs.size(); i++){
		if(i != 0) cout << " ";
		print(vs[i]);
	}
	cout << endl;
	return 0;
}