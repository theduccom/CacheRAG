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

bool is_prime[70001];

void sieve(int n){
	int p=0;
	int i,j;
	for(i=0;i<=n;i++)is_prime[i]=true;
	is_prime[0]=is_prime[1]=false;
	for(i=2;i<=n;i++){
		//is_prime[i]==true時
		if(is_prime[i]){
			for(j=2*i;j<=n;j+=i)is_prime[j]=false;
		}
	}
}

int main(void){
	sieve(70000);
	int a,b;
	bool ch=true;
	while(~scanf("%d",&a)){
		ch=true;
		b=a;
		while(ch){
			b--;
			if(is_prime[b]){
				printf("%d ",b);
				ch=false;
			}
		}
		ch=true;
		b=a;
		while(ch){
			b++;
			if(is_prime[b]){
				printf("%d\n",b);
				ch=false;
			}
		}
	}
	return 0;
}