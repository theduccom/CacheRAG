#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip> 
#include <complex> 
#include <string>
#include <vector> 
#include <list>
#include <deque> 
#include <stack> 
#include <queue> 
#include <set>
#include <map>
#include <bitset>
#include <functional>
#include <utility>
#include <algorithm> 
#include <numeric> 
#include <typeinfo> 
#include <cstdio>
#include <cstdlib> 
#include <cstring>
#include <cmath>
#include <climits> 
#include <ctime>

using namespace std;

bool is_prime[300001];

void sieme(int n){
	int i,j;
	for(i=0;i<=n;i++){
		is_prime[i]=true;
	}
	is_prime[0]=is_prime[1]=false;
	for(i=2;i<=n;i++){
		if(is_prime[i]){
			for(j=i*2;j<=n;j+=i)is_prime[j]=false;
		}
	}
}

int main(void){
	sieme(300000);
	while(1){
		long long int ans=0;
		int n;
		cin >> n;
		if(n==0)break;
		long long int a=2;
		while(n>0){
			if(is_prime[a]==true)ans+=a,n--;
			a++;
		}
		cout << ans << endl;
		
	}
	return 0;
}