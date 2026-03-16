#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <string>
#include <cmath>
#include <complex>
#include <map>
using namespace std;

#define rep(i,n) for(int i=0;i<int(n);++i)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define EPS 1e-8

static const double PI=6*asin(0.5);
typedef complex<double> P;
typedef long long ll;


ll sum[10010]={0};
bool prime[200000];
vector<int> v;

int main(){
	rep(i,200000) prime[i]=true;
	prime[0]=prime[1]=false;
	for(int i=2;i*i<=200000;i++){
		if(prime[i]){
			for(int j=i*i;j<200000;j+=i){
				prime[j]=false;
			}
		}
	}
	v.PB(2);
	for(int i=3;i<200000;i++){
		if(prime[i]){
			v.PB(i+v[v.size()-1]);
		}
	}
	int n;
	while(cin>>n,n!=0) cout<<v[n-1]<<endl;
	
	
	return 0;
}