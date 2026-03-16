#include <iostream>
#include <cstdio>
#include <string>
#include <map>

using namespace std;

int main() {
	int num;
	char blood[2];
	char row[1000];
	map<string, int> type;
	//type.insert(make_pair("A", 0));
	//type.insert(make_pair("B", 0));
	//type.insert(make_pair("O", 0));
	//type.insert(make_pair("AB", 0));
	while(cin>>row){
		if(cin.eof()) break;
		sscanf(row,"%d,%s", &num, &blood);
		type[blood]++;
	}
	cout<<type["A"]<<endl;
	cout<<type["B"]<<endl;
	cout<<type["AB"]<<endl;
	cout<<type["O"]<<endl;
	return 0;
}