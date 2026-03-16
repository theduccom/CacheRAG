#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;

string s;
vector<string> vec;

int main(){
	while(cin >> s){
		vec = vector<string>();
		int st = 0;
		if(s[0] == '@'){
			st = -1;
		}
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '@'){
				if(st >= 0){
					vec.push_back(s.substr(st,i-st));
				}
				if(s[i + 3] != '@'){
					st = i + 3;
				}
				else{
					st = -1;
				}
				string rep = "";
				char length[2] = {s[i+1],'\0'};
				for(int j = 0; j < atoi(length); j++){
					rep += s[i+2];
				}
				vec.push_back(rep);
				i += 2;
			}
		}
		if(st >= 0){
			vec.push_back(s.substr(st,s.size()-st));
		}
		string ans = "";
		for(int i = 0; i < vec.size(); i++){
			ans += vec[i];
		}
		cout << ans << endl;
	}
	return 0;
}