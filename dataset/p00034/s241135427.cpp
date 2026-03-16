#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define dump(x)  cerr << #x << " = " << (x) << endl
#define rep(i,n) for(int i=0;i<(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back
int main(){
	char ch;
	int n[12];
	int v1,v2;
	while( cin>>n[0]>>ch>>n[1]>>ch>>n[2]>>ch>>n[3]>>ch>>n[4]>>ch>>n[5]>>ch>>n[6]>>ch>>n[7]>>ch>>n[8]>>ch>>n[9]>>ch>>v1>>ch>>v2 ){
		int l=0;
		rep(i,10){
			l+=n[i];
		}
		double val=v1/( (double)(v1+v2)/l );

		int now=0;
		int ans=10;
		rep(i,10){
			now+=n[i];
			if(now>=val){
				ans=i+1;
				break;
			}
		}

		cout<<ans<<endl;

	}
}