#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <vector>
#include <string>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;

void RepStr(string& str, const string& from, const string& to){
   string::size_type pos = 0;
 
  while(pos = str.find(from, pos), pos != string::npos) {
     str.replace(pos, from.length( ), to);
     pos += to.length();
   }
}


int main(void){

string ws;
int n;
	cin >> n;
	cin.ignore();
	rep(i,n){
		getline(cin,ws);
		RepStr(ws,"Hoshino","Hoshina");
		cout << ws << endl;
	}
	return 0;
	
}