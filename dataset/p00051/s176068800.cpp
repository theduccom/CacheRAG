#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>
#include <string>
#define shosu(x) fixed<<setprecision(x)
using namespace std;
typedef pair<int,int> P;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,P> pip;
typedef long long ll;
const int inf=1<<30;
const double pi=acos(-1);

int n;
vector<char> cnum(8);
vi num(8);

int rui(int x){
	int ans=1;
	for(int i=0;i<x;i++) ans*=10;
	return ans;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int M=0,m=0;
		for(int j=0;j<8;j++) cin>>cnum[j];
		for(int j=0;j<8;j++) num[j]=cnum[j]-'0';
		sort(num.begin(),num.end());
		for(int j=0;j<8;j++) M+=num[j]*rui(j);
		for(int j=0;j<8;j++) num[j]*=-1;
		sort(num.begin(),num.end());
		for(int j=0;j<8;j++) m+=-num[j]*rui(j);
		cout<<M-m<<endl;
	}
}