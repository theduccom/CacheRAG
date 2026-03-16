#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (int) (l);i < (int) (r);i++)
#define ALL(x) x.begin(),x.end()
template<typename T> bool chmax(T& a,const T& b){ return a < b ? (a = b,true) : false; }
template<typename T> bool chmin(T& a,const T& b){ return b < a ? (a = b,true) : false; }
typedef long long ll;

int N = 50000;
int sum [100001];

vector<int> sieve()
{
	deque<bool> is_prime(N + 1,true);
	vector<int> res;
	for(int i = 2;i <= N;i++) if(is_prime [i]){
		res.push_back(i);
		for(int j = i * 2;j <= N;j += i) is_prime [j] = false;
	}
	return res;
}

int main()
{
	vector<int> prime = sieve();
	FOR(i,0,prime.size()){
		FOR(j,i,prime.size()){
			sum [prime [i] + prime [j]]++;
		}
	}

	int P;
	while(scanf("%d",&P),P){
		printf("%d\n",sum [P]);
	}

	return 0;
}