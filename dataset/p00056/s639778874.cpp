#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<set>
#include<map>
#include<bitset>
#include<algorithm>
#include<string>
#include<utility>
#include<cmath>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<cstdlib>
#include<cstdio>
using namespace std;

#define N 50002

bool is_prime[N];

void sieve(){
	memset(is_prime,1,sizeof(is_prime));
	is_prime[0] = is_prime[1] = false;
	for(int x=2;x<N;++x){
		if(is_prime[x]){
			for(int i=x+x;i<N;i+=x){
				is_prime[i] = false;
			}
		}
	}
}


int main(){
	sieve();
	int j;
	while(scanf("%d",&j) != EOF , j){
		int t = 0;
		map<pair<int,int>,int> table;
		for(int x=2;x<=j;++x){
			if( is_prime[x] && is_prime[j-x] ){
				table[make_pair(min(x,j-x),max(x,j-x))] = 100;
			}
		}
		printf("%d\n",table.size());
	}
	return 0;
}