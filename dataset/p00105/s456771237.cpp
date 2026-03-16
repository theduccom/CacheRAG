#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

int StringComp(const string &s1, const string &s2){
	return s1.compare(s2);
}

int main(void){
	map< string, vector< int > > m;
	while( true ){
		string word;
		int page;

		cin >> word >> page;
		if( cin.eof() ) break;

		m[word].push_back(page);
	}
	map< string, vector< int > >::iterator itM = m.begin();
	while(itM != m.end()){
		sort(itM->second.begin(), itM->second.end());
		cout << itM->first << '\n';
		cout << itM->second[0];
		for(unsigned int i = 1; i < itM->second.size(); i++){
			cout << ' ' << itM->second[i];
		}
		cout << endl;
		itM++;
	}
	return 0;
}