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
#define rp(a) while(a--)
#define pb push_back
#define mp make_pair
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double EPS=1e-10;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define MAX 50010
bool sosu[MAX];
int main(){
	memset(sosu,true,MAX);
	for(int i=4;i<MAX;i+=2)sosu[i]=false;
	for(int i=3;i<MAX;i+=2)if(sosu[i])
	for(int j=i*3;j<MAX;j+=2*i)sosu[j]=false;
	
	int n;
	while(cin>>n,n){
		int co=0;
		loop(i,2,n/2+1)if(sosu[i]&&sosu[n-i])co++;
		cout<<co<<endl;
	}
}