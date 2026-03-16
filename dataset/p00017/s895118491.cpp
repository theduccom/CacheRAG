#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<vector>
using namespace std;
int word_search(vector<string> s,  string key){
	for(int i = 0; i < s.size(); i++){
		if(s[i].length() <= 2 || s[i].length() >= 6) continue;
		for(int j = 0; j < s[i].length() - 1; j++)
			if(s[i][j] == '.') continue;
		if(s[i][s[i].length() - 1] == '.') s[i].erase(s[i].end() - 1);
		for(int j = 0; j < 26; j++){
			string turned_word;
			for(int k = 0; k < s[i].length(); k++){
				turned_word.push_back((s[i][k] + j - 'a') % 26 + 'a');
			}
			if(turned_word == key) return j;
		}
	}
	return -1;
}
int main(){
	for(;;){
		char line[200];
		if(fgets(line, sizeof(line), stdin) == NULL) break;
		vector<string> s;
		char *token = strtok(line, " ");
		s.push_back(token);
		for(;;){
			token = strtok(NULL, " ");
			if(token == NULL) break;
			s.push_back(token);
		}
		int num;
		if(word_search(s, "the") != -1) num = word_search(s, "the");
		if(word_search(s, "this") != -1) num = word_search(s, "this");
		if(word_search(s, "that") != -1) num = word_search(s, "that");
		for(int i = 0; i < s.size(); i++){
			for(int j = 0; j < s[i].length(); j++){
				if(s[i][j] == '.' || s[i][j] == '\n') cout << s[i][j];
				else cout << (char)((s[i][j] + num - 'a') % 26 + 'a');
			}
			if(i != s.size() - 1)cout << ' ';
		}
	}
	return 0;
}
