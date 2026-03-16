#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
typedef pair<string, int> psi;

int main(){
	vector<psi> words;
	while(!cin.eof()){
		psi entry;
		cin >> entry.first >> entry.second;
		words.push_back(entry);
	}
	sort(words.begin(), words.end());
	string word = "";
	for(int i = 1; i < words.size(); ++i){
		if(words[i].first != word){
			word = words[i].first;
			cout << word << endl;
		}
		cout << words[i].second;
		if(i == words.size() - 1 || words[i + 1].first != word){
			cout << endl;
		}else{
			cout << " ";
		}
	}
	return 0;
}