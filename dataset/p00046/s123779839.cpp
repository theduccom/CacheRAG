#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstdio>
#include<string>
#include<cmath>
typedef long long int ll;
#define VI vector<int>

#define rep(i,a) for(int i=0;i<(a);i++)

int n,m;

using namespace std;


int main(){
	double maxi=-1,mini=100000000;
	while(1){
		double n;
		if(!(cin>>n))break;
		if(n==0)break;
		if(maxi<n)maxi=n;
		if(mini>n)mini=n;
	}
	cout<<maxi-mini<<endl;
	return 0;
}