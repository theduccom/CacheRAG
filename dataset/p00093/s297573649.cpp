#include <iostream>
#include <stack>
#include <algorithm>
#include <cstdio>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>

#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)

using namespace std;


int main(void){

int a,b,sp=0;
	
	while(cin >> a >> b){
		if(a==0  && b==0 || cin.eof()) break;
		int cnt=0;
		if(sp != 0) cout << endl;
		while(1){
			if(a%400 == 0 || a%100 != 0 && a%4 == 0 ){
				cout << a << endl;
				cnt++;
			}
			a++;
			if(a > b) break;
		}	
		if(cnt==0) cout << "NA" << endl;
		sp = 1;
	}
	return 0;
	
}