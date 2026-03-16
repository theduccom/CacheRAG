#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<cmath>
#include<cstring>
#include<utility>
#include<set>
#include<stack>
#include<complex>
#include<bitset>
#define vi vector<int>
#define vvi vector<vector<int> >
#define ll long long int
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vb vector<bool>
#define vc vector<char>
#define vs vector<string>
#define ld long double
#define INF 1e9
#define EPS 0.0000000001
#define rep(i,n) for(int i=0;i<n;i++)
#define CC puts("-------ok--------");
#define all(in) in.begin(), in.end()
using namespace std;
typedef pair<int, int>PA;
#define MAX  999999
int main(){
	int n;
	while(cin>>n,n){
	vi v5(20001,0); vi v2(20001,0);
	for(int i=1;i<=6;i++){
		int cnt=pow(5,i);
		for(int j=1;;j++){ if(j*cnt>20000)break;v5[j*cnt]=i;}
		}
	for(int i=1;i<=15;i++){
		int cnt=pow(2,i);
		for(int j=1;;j++){ if(j*cnt>20000)break;v2[j*cnt]=i;}
		}
	int f=0; int d=0;
	for(int i=1;i<=n;i++){
		f+=v5[i];
		d+=v2[i];
		}
	cout<<min(f,d)<<endl;
	}
}