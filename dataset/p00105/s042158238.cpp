#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES

#include <iostream>
#include <algorithm>
#include <functional>
#include <string>
#include <queue>
#include <cmath>
#include <stack>
#include <numeric>
#include <ctime>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>

using namespace std;
typedef long long int lint;

int main()
{
	map<string, vector<int> > page;
	set<string> word;

	string str;
	int p;
	while(cin >> str >> p){
		word.insert(str);
		page[str].push_back(p);
	}
	
	set<string>::iterator it = word.begin();
	while(it != word.end()){
		cout << *it;
		sort(page[*it].begin(), page[*it].end());
		for(int i = 0; i < page[*it].size(); i++){
			if(i == 0) cout << endl;
			else cout << " ";
			cout << page[*it][i];
		}
		cout << endl;
		it++;
	}

	return 0;
}