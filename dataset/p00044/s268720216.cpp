#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <complex>
#include <functional>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

#define dump(n) cout<<"# "<<#n<<"="<<(n)<<endl
#define debug(n) cout<<__FILE__<<","<<__LINE__<<": #"<<#n<<"="<<(n)<<endl
#define repi(i,a,b) for(int i=int(a);i<int(b);i++)
#define rep(i,n) repi(i,0,n)
#define iter(c) __typeof((c).begin())
#define tr(c,i) for(iter(c) i=(c).begin();i!=(c).end();i++)
#define allof(c) (c).begin(),(c).end()
#define mp make_pair

typedef long long ll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main()
{
	deque<bool> is_prime(50022,true);
	is_prime[0]=is_prime[1]=false;
	repi(i,2,is_prime.size()){
		if(!is_prime[i])
			continue;
		for(int j=i+i;j<(int)is_prime.size();j+=i)
			is_prime[j]=false;
	}
	for(int n;cin>>n;){
		for(int i=n-1;;i--){
			if(is_prime[i]){
				cout<<i<<" ";
				break;
			}
		}
		for(int i=n+1;;i++){
			if(is_prime[i]){
				cout<<i<<endl;
				break;
			}
		}
	}
	
	return 0;
}