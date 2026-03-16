#include <utility>
#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

vector<pair<string, int> > v;
vector<pair<string, vector<int> > > l;
vector<string> w;

bool fa(int index) {
	for (int i = 0; i < l.size(); i++) {
		if (l[i].first == v[index].first) {
			l[i].second.push_back(v[index].second);
			return true;
		}
	}
	l.push_back({ v[index].first,vector<int>(1,v[index].second) });
	w.push_back(v[index].first);
	return false;
}

int search(int index) {
	for (int i = 0; i < l.size(); i++) {
		if (w[index] == l[i].first)
			return i;
	}
	return -1;
}

int main(){
	string s;
	int p;
	while (cin >> s >> p && p != 0) {
		v.push_back(pair<string, int>({ s,p }));
	}
	for (int i = 0; i < v.size(); i++) {
		fa(i);
	}
	sort(w.begin(), w.end());
	for (int i = 0; i < l.size(); i++) {
		sort(l[i].second.begin(), l[i].second.end());
	}
	for (int i = 0; i < w.size(); i++) {
		int index = search(i);
		cout << w[i] << endl;
		cout << l[index].second[0];
		for (int j = 1; j < l[index].second.size(); j++) {
			cout << " " << l[index].second[j];
		}
		cout << endl;
	}

	return 0;
}