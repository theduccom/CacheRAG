#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <queue>

#define rep(x,to) for(x=0;x<to;x++)
#define rep2(x,from,to) for(x=from;x<to;x++)

using namespace std;


int main(void){

int i,j;

	rep2(i,1,10) rep2(j,1,10) 
		cout << i << "x" << j << "=" << i*j << endl;
	return 0;
}