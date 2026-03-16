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

/*
one : 18
two : 21
three : 33
full house : 36
four card : 84

*/
int d[5];
int card[15];

bool isstraight(){
	for(int i=1; i<=10; i++){
		if( card[i]==3 && card[i+1]==3 && card[i+2]==3 &&
				card[i+3]==3 && card[i+4]==3 ) return true;
	}
	return false;
}
int main(){
	while(~scanf("%d,%d,%d,%d,%d",d,d+1,d+2,d+3,d+4)){
		rep(i,15)card[i]=1;
		rep(i,5){
			if( d[i]==1 ) card[14]*=3;
			card[d[i]]*=3;
		}
		int sum = 0;
		rep(i,14)if( card[i]>1 )sum+=card[i];
		
		if( isstraight() ){
			puts("straight");
		}else if( sum==18 ){ //one
			puts("one pair");
		}else if( sum==21 ){ //two
			puts("two pair");
		}else if( sum==33 ){ 
			puts("three card");
		}else if( sum==36 ){
			puts("full house");
		}else if( sum==84 ){
			puts("four card");
		}else{
			puts("null");
		}
		
		//rep(i,14)printf("%d ",card[i]); printf("sum:%d\n",sum);
		
	}
	return 0;
}