#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
	map<string, vector<int>>s;
	string a; int b;
	cin >> a >> b;
	if (cin.fail()) {}
	else {
		vector<int>r(0);
		s.insert(pair<string, vector<int>>(a, r));
		s[a].push_back(b);
		while (1) {
			cin >> a >> b;
			if (cin.fail())break;
			for (auto c = s.begin(); c != s.end(); c++) {
				if (a == c->first) { c->second.push_back(b); break; }
				auto d = c;
				d++;
				if (d == s.end()) { vector<int>r(0); s.insert(pair<string, vector<int>>(a, r));  s[a].push_back(b); break; }
			}
		}
		for (auto e = s.begin(); e != s.end(); e++) {
			sort(e->second.begin(), e->second.end());
			cout << e->first << endl;
			for (int f = 0; f < e->second.size()-1; f++) {
				cout << e->second[f] <<" ";
			}
			cout << e->second[e->second.size() - 1] << endl;
		}
	}
}