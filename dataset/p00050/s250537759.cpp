#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <string>

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

string bun,wk;
vector<string> bun2;
	getline(cin, bun );	

	stringstream buf(bun);
	while(buf >> wk){
		int i=0;
		bun2.push_back(wk);
	}	

	wk =bun;
	RepStr(wk,"apple","AAPLL");
	RepStr(wk,"peach","apple");
	RepStr(wk,"AAPLL","peach");
	cout << wk << endl;
	return 0;
	
	
}