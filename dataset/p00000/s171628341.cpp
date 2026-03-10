
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i,n) for(int i = 0; i < n; i++)
#define REP(i,j,n) for(int i = j; i < n; i++)


int main(){

	REP(i,1,10){
		REP(j,1,10){
			cout << i << "x" << j << "=" << i * j << endl;
		}
	}

	return 0;
}