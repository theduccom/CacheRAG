#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <map>


#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){

string ws,sws;
int cnt =0;
	while(cin >> ws){
		sws = ws;
		reverse(sws.begin(),sws.end());
		if(ws == sws) cnt++;
	}
	cout << cnt << endl;
	return 0;
	
}