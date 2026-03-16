#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n)  FOR(i,0,n)

int main(){
	string hoshino = "Hoshino";
	string hoshina = "Hoshina";
	int tSup;
	cin >> tSup;
	cin.ignore();
	REP(t,tSup){
		string x;
		getline(cin,x);
		while(true){
			int i = x.find(hoshino,0);
			if(i==string::npos){break;}
			x.replace(i,hoshino.length(),hoshina);
		}
		cout << x << endl;
	}
	return 0;
}