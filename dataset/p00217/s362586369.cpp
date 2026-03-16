#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
#define R(i,a,n) for(int i=a;i>=n;i--)
using namespace std;
int main(){
	int n,a,b,c,s,w;
	while(cin>>n,n){
		s=0;
		while(n--){
			cin>>a>>b>>c;
			if(s<b+c){
				w=a;
				s=b+c;
			}
		}
		cout<<w<<' '<<s<<endl;
	}
}