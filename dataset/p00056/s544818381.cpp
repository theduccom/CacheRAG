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


bool prime[50010];
int n;

int main(){
	rep(i,50010) prime[i]=true;
	prime[0]=prime[1]=false;
	for(int i=2;i*i<=50010;i++){
		if(prime[i]){
			for(int j=i*i;j<50010;j+=i){
				prime[j]=false;
			}
		}
	}
	
	while(cin>>n,n!=0){
		int res=0;
		//cout<<"n= "<<n<<endl;
		for(int i=2;2*i<=n;i++){
			if(prime[i]&&prime[n-i]){
				//cout<<i<<" "<<n-i<<endl;
				res++;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}