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
	map<string,int> mci;
	set<int> st;
	int num;
	char bd[3];
	while(~scanf("%d,%s ",&num,bd)){
		if( st.find(num) != st.end() ) continue;
		mci[string(bd)]++;
		st.insert(num);
	}
	int step = 0;
	map<string,int>::iterator it;
	for(it=mci.begin(); it!=mci.end();){
		if( step==0 && it->first=="A" ){
			printf("%d\n",it->second);
			it = mci.begin();
			step = 1;
		}else if( step==1 && it->first=="B" ){
			printf("%d\n",it->second);
			it = mci.begin();
			step = 2;
		}else if( step==2 && it->first=="AB" ){
			printf("%d\n",it->second);
			it = mci.begin();
			step = 3;
		}else if( step==3 && it->first=="O" ){
			printf("%d\n",it->second);
			step = 4;
			break;
		}else{
			it++;
		}
	}
	for(int i=step; i<4; i++)printf("0\n");
	return 0;
}