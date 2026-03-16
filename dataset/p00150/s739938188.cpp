#include <algorithm>
#include <cfloat>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

using namespace std;

int prime[10001];

int main(){
	prime[0]=prime[1]=1;
	
	for(int i=2;i*i<10001;i++){
		if(prime[i]==1)continue;
		for(int j=2*i;j<10001;j+=i){
			prime[j]=1;
		}
	}
	
	int n;
	while(cin>>n){
		if(n==0)break;
		while(n>0){
			if(prime[n]==0 && prime[n-2]==0)break;
			else n--;
		}
		cout<<n-2<<" "<<n<<endl;
	}
}