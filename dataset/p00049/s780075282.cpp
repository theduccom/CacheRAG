#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
	int n;
	map<string, int> num;
	while(cin>>n){
		char tmp;
		string s;
		cin >> tmp >> s;
		num[s]++;
	}
	cout << num["A"] << endl << num["B"] << endl;
	cout << num["AB"] << endl << num["O"] << endl;
	return 0;
}
