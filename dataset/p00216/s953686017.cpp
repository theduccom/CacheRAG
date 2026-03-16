#include<bits/stdc++.h>
using namespace std;

main(){
	while(true){
		int w;
		cin>>w;
		
		if(w<0){
			break;
		}
		
		int ans=1150;
		
		if(30<w){
			ans += (w-30)*160;
			w=30;
		}
		
		if(20<w){
			ans += (w-20)*140;
			w=20;
		}
		
		if(10<w){
			ans += (w-10)*125;
			w=10;
		}
		
		cout << (4280-ans) << endl;
	}
}
