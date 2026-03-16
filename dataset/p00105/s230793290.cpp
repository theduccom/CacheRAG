#include<iostream>
#pragma warning(disable:4786)
#include<map>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	string a;
	map<string, vector<int>> d;
	while(getline(cin, a)){
		string b, h = "";
		int c, sum = 0;
		a += " ";
		for (int i = 0; i < a.length(); i++) {
			if (a[i] == ' ') {
				if (sum == 0)
					b = h;
				else
					c = atoi(h.c_str());
				sum++;
				h = "";
			}
			else
				h += a[i];
		}
		d[b].push_back(c);
	}
	map<string, vector<int>>::iterator t = d.begin();
	while (t != d.end()) {
		string k = (*t).first;
		sort(d[k].begin(), d[k].end());
		cout << k << endl;
		vector<int>::iterator ite = d[k].begin();
		for(ite=d[k].begin();ite!=d[k].end();++ite) {
			if (ite == d[k].begin())
				cout << *ite;
			else
				cout << " " << *ite;
		}
		cout << "\n";
		t++;
	}
}