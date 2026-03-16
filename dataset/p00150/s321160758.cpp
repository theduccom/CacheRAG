#include <bits/stdc++.h>
#define r(i,a,n) for(int i=a;i<n;i++)
using namespace std;
int s[10001]={1,1,0,0,1};
int main(){
	r(i,2,10001)for(int j=i*2;j<10001;j+=i)s[j]++;
	int a;
	while(cin>>a,a){
		while(a){
			if(!s[a]&&!s[a-2]){
				cout<<a-2<<' '<<a<<endl;
				break;
			}a--;
		}
	}
}