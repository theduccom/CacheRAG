#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

typedef struct{
	int jun;
	string tango;
	vector<int> page;
}sakuin;

int main(){
	vector<string> words;
	sakuin pages[100];
	string word;
	int num;
	int all;
	bool flag;

	cin >> word >> num;
	words.push_back(word);
	pages[0].jun = 0;
	pages[0].tango = word;
	pages[0].page.push_back(num);
	all = 1;

	while(cin >> word >> num){
		flag = true;
		for(int j=0;j<all;j++){
			if(pages[j].tango == word){
				pages[j].page.push_back(num);
				sort(pages[j].page.begin(),pages[j].page.end());
				flag = false;
				break;
			}
		}
		if(flag){
			words.push_back(word);
			sort(words.begin(),words.end());
			all++;
			for(int i=0;i<all;i++){
				if(words[i] == word){
					pages[all-1].jun = i;
					pages[all-1].tango = word;
					pages[all-1].page.push_back(num);

					for(int j=i+1;j<all;j++){
						for(int k=0;k<all;k++){
							if(words[j] == pages[k].tango)
								pages[k].jun += 1;
						}
					}
					break;
				}
			}
		}
	}

	for(int i=0;i<all;i++){
		for(int j=0;j<all;j++){
			if(pages[j].jun == i){
				cout << pages[j].tango << endl;
				for(unsigned int k=0;k<pages[j].page.size();k++){
					cout << pages[j].page[k];
					if(k+1<pages[j].page.size()) cout << ' ';
				}
				cout << endl;
				break;
			}
		}
	}
	return 0;
}