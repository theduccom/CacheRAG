#include <iostream>
#include <string>
#define REP(i,n) for(int i = 0; i < (n); ++i)
using namespace std;

int main(){
	string str;
	getline(cin,str,'\n');
	string ret = "";
	REP(i, str.size()) ret += ('a' <= str[i] && str[i] <= 'z') ? str[i] - 'a' + 'A' : str[i];
	cout << ret << endl;
}