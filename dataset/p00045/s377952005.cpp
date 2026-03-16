#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#define rep(x,to) for(int x=0;x<to;x++)
#define rep2(x,from,to) for(int x=from;x<to;x++)
#define num  50111

using namespace std;




int main(void){
 
int innum;

int  su,tan,ssu=0,skin=0,cnt=0;
char k;
	while(cin >> tan >> k >> su){
		ssu += su;
		skin += tan * su;
		cnt++;
	}
	cout << skin << endl;
	cout << (int)(ssu*1.0l/cnt + 0.5) << endl;
	
    return 0;
}