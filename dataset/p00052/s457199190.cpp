#include<iostream>

using namespace std;

int main(){
	
	while(1){
		int n;
		cin>>n;
		
		if(n==0)break;
		
		int ans = 0;
		for(int i=0;i<20;i++){
			ans += n/5;
			n/=5;
		}
		
		cout<<ans<<endl;
	}
}