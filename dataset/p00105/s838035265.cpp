#include<map>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	map < string, vector<int> > p;
	string s;
	int page;
	while (cin >> s >> page){
		p[s].push_back(page);
	}

	map< string, vector<int> >::iterator it;
	for (it = p.begin(); it != p.end(); it++){
		sort(p[(*it).first].begin(), p[(*it).first].end());
		cout << (*it).first << endl;
		for (int i = 0; i < p[(*it).first].size(); i++){
			if (i == p[(*it).first].size()-1){
				cout << p[(*it).first][i];
				break;
			}
			cout << p[(*it).first][i] << " ";
		}
		cout << endl;
	}
}