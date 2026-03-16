#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <deque>
#include <cstdio>
#include <cmath>
#include <complex>
#include <iostream>
#include <iterator>

using namespace std;

#define reep(i,f,t) for(int i=f ; i<int(t) ; ++i)
#define rep(i,n) reep(i, 0, n) 

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

typedef vector<double> vd;
typedef vector<vd> vvd;

vi eratos(int n)
{
	vector<bool> isprime(n, true);
	isprime[0] = isprime[1] = false;
	reep(i, 2, n){
		if(isprime[i]){
			for(int j=i*2; j<n; j+=i)
				isprime[j] = false;
		}
	}
	
	vi prime;
	rep(i, n){
		if(isprime[i])
			prime.push_back(i);
	}
	
	return prime;
}

int main()
{
	vi prime = eratos(10001);
	int n;
	while(scanf("%d", &n), n){
		int id = distance(prime.begin(), upper_bound(prime.begin(), prime.end(), n)) - 1;
		for(;;){
			if(prime[id]-prime[id-1] == 2)
				break;
			--id;
		}
		
		printf("%d %d\n", prime[id-1], prime[id]);
	}

	return 0;
}