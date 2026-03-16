#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<time.h>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
int main(){
	#define MAX (int)1e5
	bool sosu[MAX];
	memset(sosu,true,MAX);
	for(int i=4;i<MAX;i+=2)sosu[i]=false;
	for(int i=3;i<MAX;i+=2)
	for(int j=3*i;j<MAX;j+=2*i)sosu[j]=false;
	int n;
	while(cin>>n,n){
		int i;
		for(i=n;i>=2;i--)if(sosu[i]&&sosu[i-2])break;
		cout<<i-2<<" "<<i<<endl;
	}
}