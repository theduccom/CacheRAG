#include <iostream>
#include <map>
#include <string>
using namespace std;
#define FIN(V) cout<<V<<endl
int main(void){
	map<string, int> map;
	int n;
	char c;
	string s;
	while(cin >> n >> c >> s){
		map[s]++;
	}
	FIN(map["A"]);
	FIN(map["B"]);
	FIN(map["AB"]);
	FIN(map["O"]);
}