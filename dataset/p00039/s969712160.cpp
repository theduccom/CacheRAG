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

int money[256];
int main(){
	money['I'] = 1; money['V'] = 5;
	money['X'] = 10; money['L'] = 50;
	money['C'] = 100; money['D'] = 500;
	money['M'] = 1000;
	
	string in;
	while(cin>>in){
		bool f = false;
		int sum = 0;
		for(int i=in.size()-1; i>=0; i--){
			if( i<in.size()-1 && f ){
				if( money[in[i]]>=money[in[i+1]] ){
					sum += money[in[i]];
				}else{
					sum -= money[in[i]];
					f = false;
				}
			}else{
				sum += money[in[i]];
				f = true;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}