#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>

using namespace std;

int main(){

	map<string,int> table;
	int num;
	char cm;
	string type;

	table["A"]=0;
	table["B"]=0;
	table["AB"]=0;
	table["O"]=0;
	while(cin>>num>>cm>>type){
		table[type]++;
	}
	cout<<table["A"]<<endl;
	cout<<table["B"]<<endl;
	cout<<table["AB"]<<endl;
	cout<<table["O"]<<endl;

	return 0;
}