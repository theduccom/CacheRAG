#include<iostream>
#include<string>
#include<vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<map>
#include<functional>
#include<queue>
#include<stack>
#include<set>
using namespace std;
int main(){
	vector<int>prime;
	for(int i=2;i<=100000;i++){
		bool f=1;
		for(int j=2;j*j<=i;j++)if(i%j==0)f=0;
		if(f)prime.push_back(i);
	}
	int n;
	while(cin>>n){
	int a=0,b=0;
	for(int i=0;;i++){
		if(prime[i]>n){b=prime[i];break;}
		else if(prime[i]==n){b=prime[i+1];break;}
		a=max(prime[i],a);
	}
	cout<<a<<" "<<b<<endl;
	}
	return 0;
}