#include<iostream>
#include<fstream>
#include<sstream>
#include<cstdio>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<deque>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;

#define ull unsigned long long
#define ll long long
#define PI 3.141592654
#define N 105000
vector<int> s_n;
bool is_prime[N];

void sieve(){
	memset(is_prime,1,sizeof(is_prime));
	is_prime[0] = is_prime[1] = false;
	int ac = 0;
	for(int x=0;x<N;++x){
		if(is_prime[x]){
			ac += x;
			s_n.push_back(ac);
			for(int c=x+x;c<N;c+=x){
				is_prime[c] = false;	
			}
		}
	}
}

int main(){
	sieve();
	int n;
	while(cin>>n,n){
		cout<<s_n[n-1]<<endl;
	}
	return 0;
}