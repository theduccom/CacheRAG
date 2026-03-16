#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	vector<string> words;
	vector<vector<int> > pages;
	string word; int page;
	while(cin>>word>>page) {
		bool is_there = false; int word_place;
		for (int i = 0; i < words.size(); i++) {
			if (word == words[i]) {
				is_there = true;
				word_place = i;
			}
		}
		if (is_there) {
			pages[word_place].push_back(page);
		}
		else {
			words.push_back(word);
			vector<int>* x = new vector<int>;
			pages.push_back(*x);
			pages[pages.size() - 1].push_back(page);
		}
	}
	for (int i = 0; i < words.size() - 1; i++) {
		for (int j = 0; j < words.size() - 1; j++) {
			if (words[j] > words[j + 1]) {
				string tmp_w=words[j];
				words[j] = words[j + 1];
				words[j + 1] = tmp_w;
				vector<int> tmp_p=pages[j];
				pages[j] = pages[j + 1];
				pages[j + 1] = tmp_p;
			}
		}
	}
	for (int i = 0; i < words.size(); i++) {
		for (int j = 0; j < pages[i].size()-1; j++) {
			for (int c = 0; c < pages[i].size()-1; c++) {
				if (pages[i][c] > pages[i][c + 1]) {
					int tmp=pages[i][c];
					pages[i][c] = pages[i][c + 1];
					pages[i][c + 1] = tmp;
					}
			}
		}
	}
	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << endl;
		for (int m = 0; m < pages[i].size(); m++) {
      if(pages[i].size()-1==m)cout<<pages[i][m];
			else cout << pages[i][m]<<' ';
		}
		cout << endl;
	}
}