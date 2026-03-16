#include <iostream>
#include <map>
#include <string>
#include <set>

using namespace std;

int main(){
	int n;
	string str;	
	map<string, set<int> > m;

	while(cin >> str >> n){
		m[str].insert(n);
	}
	for(auto it = m.begin(); it != m.end(); it++){
		cout << it->first << endl;
		int i = 0;
		for(auto its =  it->second.begin(); its != it->second.end(); its++){
			if(i != it->second.size() - 1) cout << *its << " ";
			else cout << *its;
			i++;
		}
		cout << endl;
	}
}