#include <iostream>
#include <map>
#include <algorithm>
#include <cstdio>
#include <string>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){

int no;
char k;
string chi;
	
map<string,int> ket;
	
	ket["A"]=0;   ket["B"]=0;
	ket["O"]=0;   ket["AB"]=0;
	
	while(cin >>no >>k >>chi){
		
		ket[chi]++;
	}	
	
	cout << ket["A"]  << endl <<  ket["B"] << endl;
	cout << ket["AB"] << endl <<  ket["O"] << endl;

	return 0;
	
	
}