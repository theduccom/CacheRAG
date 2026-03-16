#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	const string t("Hoshino"), t2("Hoshina");
	int n;
	cin >> n;
	string s;
	getline(cin, s);
	for(int i = 0; i < n; i++){
		getline(cin, s);
		string::iterator iter = search(s.begin(), s.end(), t.begin(), t.end());
		for(string::iterator it = s.begin(); it != iter; it++) cout << *it;
		while(iter != s.end()){
			cout << t2;
			iter += t2.size();
			string::iterator it = iter;
			iter = search(iter, s.end(), t.begin(), t.end());
			for(;it != iter; it++) cout << *it;
		}
		cout << endl;
	}
	return 0;
}