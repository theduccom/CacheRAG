#include <bits/stdc++.h>
#define rep(i,l,n) for(int i=l;i<n;i++)
#define rer(i,l,n) for(int i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef vector<int> vint;
typedef pair<int,int> pii;

int main(){
	double a[11]={},sum;
	while(cin>>a[1]){
		sum=a[1];
		rer(i,2,10){
			if(i%2) a[i]=a[i-1]/3;
			else a[i]=2*a[i-1];
			sum+=a[i];
		}
		printf("%.8lf\n",sum);
	}
}