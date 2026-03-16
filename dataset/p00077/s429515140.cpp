#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#include <cmath>

//AOJ0077
#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){

string ws;

	while(cin >> ws){
		if(cin.eof()) break;
		rep(i,ws.size()){
			string aat="";
			if(ws[i] == '@'){
				rep(j,ws[i+1]-'0') aat += ws[i+2];
				ws.replace(i, 3, aat);
			}
		}
		cout << ws <<endl;
	}
	
	return 0;
	
}