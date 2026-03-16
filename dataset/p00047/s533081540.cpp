#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
#include <complex>
#include <climits>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define EPS 1e-8

int main(){
	char a,b;
	int cup[3] = {1,0,0};
	while(~scanf("%c,%c ",&a,&b)){
		a -= 'A'; b -= 'A';
		swap(cup[a],cup[b]);
	}
	if( cup[0]==1 ){
		puts("A");
	}else if( cup[1]==1 ){
		puts("B");
	}else{
		puts("C");
	}
	return 0;
}