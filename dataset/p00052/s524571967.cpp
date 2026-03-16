#include<iostream>
using namespace std;
int main(){
	int n,ans,temp;
	while(cin>>n,n){
		ans=0;
		temp=1;
		for(int i=0;i<13;i++){
			temp*=5;
			ans+=n/temp;
		}
		cout<<ans<<endl;
	}
	return 0;
}	