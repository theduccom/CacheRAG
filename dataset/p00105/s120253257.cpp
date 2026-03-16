#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

// ??????????????§??????????????¢?´¢?????????????????????

int main(){
	
	map<string, vector<int> > m;
	map<string, vector<int> >::iterator ite;
	
	string str;
	int p;
	
	while(true){
		cin >> str;
		if(cin.eof()){
			break;
		}
		cin >> p;
		vector<int> v;
		ite = m.find(str);
		if(ite != m.end()){
			(ite -> second).push_back(p);
		}else{
			v.push_back(p);
			m.insert(make_pair(str, v));
			v.erase(v.begin(), v.end());
		}
	}
	
	for(ite = m.begin(); ite != m.end(); ite++){
		cout << ite -> first << endl;
		sort((ite -> second).begin(), (ite -> second).end());
		printf("%d", (ite -> second).at(0));
		for(int i = 1; i < (ite -> second).size(); i++){
			printf(" %d", (ite -> second).at(i));
		}
		printf("\n");
	}
	
	return 0;
}