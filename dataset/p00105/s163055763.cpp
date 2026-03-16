#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
typedef map<string,int> M;

int main(){
	M words;
	vector<int> pages[100];
	string word;
	int page,idx=0;

	while(cin>>word){
		cin>>page;
		if(words.empty() || words.find(word)==words.end()) words[word]=idx++;
		pages[words[word]].push_back(page);
	}

	for(M::iterator it=words.begin();it!=words.end();it++){
		cout<<(*it).first<<endl;
		sort(pages[(*it).second].begin(),pages[(*it).second].end());
		for(int i=0;i<pages[(*it).second].size();i++){
			cout<<pages[(*it).second][i];
			if(i!=pages[(*it).second].size()-1) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}