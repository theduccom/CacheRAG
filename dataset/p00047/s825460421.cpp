#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;




int main(void){
 
bool gl[3] = {true,false,false};
char dis[] = "ABC";
string ws;
	
	while( cin >> ws){
		swap(gl[ws[0]-'A'],gl[ws[2]-'A']);
		
	}	
	rep(i,3) if(gl[i]) cout << dis[i]  << endl;
	return 0;
}