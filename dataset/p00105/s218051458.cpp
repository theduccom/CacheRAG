#include<iostream>
#include<cstring>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

class tWord{
public:
	string word;
	vector<int> page;
	tWord( string w );
};
tWord::tWord( string w ){
	word = w;
	page.clear();
}

bool operator<( const tWord &l, const tWord &r ){
	return l.word < r.word;
}

int main(){
	vector<tWord> words;
	string line;
	int n;
	char w[31];

	// input
	while(1){
		getline( cin, line );
		if( line.size()==0 ) break;
		sscanf(line.c_str(), "%s %d", w, &n);
		int i;
		for( i=0; i<words.size(); i++ ){
			if( words[i].word == w ){
				break;
			}
		}
		if( i == words.size() ){
			string ww = w;
			words.push_back(ww);
		}
		words[i].page.push_back(n);
	}

	// output
	sort( words.begin(), words.end() );
	for( int i=0; i<words.size(); i++ ){
		if( words[i].word != "" ){
			cout << words[i].word << endl;
			sort( words[i].page.begin(), words[i].page.end() );
			cout << words[i].page[0];
			for( int j=1; j<words[i].page.size(); j++ ){
				cout << " " << words[i].page[j];
			}
			cout << endl;
		}
	}
	return 0;
}