#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	int n;
	while(cin>>n,n){
		int ans=0,most=-1,tmp,t1,t2;
		for(int i=0;i<n;i++){
			cin>>tmp>>t1>>t2;
			if(most<t1+t2){
				most=t1+t2;
				ans=tmp;
			}
		}
		cout<<ans<<" "<<most<<endl;
	}
	return 0;
}