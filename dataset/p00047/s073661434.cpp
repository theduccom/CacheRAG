#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

#define rep(i,n) for(ll i=0;i<(ll)(n);i++)
#define all(a)  (a).begin(),(a).end()
#define pb push_back

int main(){
	bool cup[3]={};
	cup[0]=true;
	char a,b;char ch;
	while(cin>>a>>ch>>b){
		swap(cup[a-'A'],cup[b-'A']);
	}
	rep(i,3){
		if(cup[i]){
			cout<<(char)('A'+i)<<endl;
			break;
		}
	}
}