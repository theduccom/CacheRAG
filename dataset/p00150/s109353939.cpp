#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <iterator>
#include <cstdlib>

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))

typedef complex<double> P;
typedef long long ll;

const int MAX_SIZE = 10000;
const int MAX_PRIME = 10001;


int prime[MAX_PRIME+1];
bool isPrime[MAX_PRIME+1];
int p;

void erats(){
	// primeツδ環スツトツづーツ渉可甘コツ可サ
	fill(isPrime,isPrime+MAX_PRIME,true);
	p = 0;
	isPrime[0] = isPrime[1] = false;

	for(int i = 2; i <= MAX_PRIME; i++){
		if(isPrime[i]){
			prime[p++] = i;
		}
		else
			continue;

		// ツづ督づゥツつ「ツづ可つゥツつッツづゥ
		for(int j = 2*i; j <= MAX_PRIME; j+=i){
			isPrime[j] = false;
		}
		cout << flush;
	}
}


int main(){

	erats();

	int n;
	vector<pair<int,int> > twin;
	bool f=false;
	for(int i = 0; i < p; i++){
		for(int j = i+1; j < p; j++){
			if(prime[j]-prime[i]==2){
				twin.push_back(make_pair(prime[i],prime[j]));
				//					cout<<prime[j]<<" "<<prime[i]<<endl;
			}
		}
	}

	while(cin>>n&&n!=0){
		for(int i = twin.size()-1; ; i--){
			if(twin[i].first<=n&&twin[i].second<=n){
				cout<<twin[i].first<<" "<<twin[i].second<<endl;
				break;
			}
		}
	}

	return 0;
}