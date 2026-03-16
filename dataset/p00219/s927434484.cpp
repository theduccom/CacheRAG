#include<bits/stdc++.h>
using namespace std;

main(){
	while(true){
		int n;
		cin>>n;
		
		if(n<=0){
			break;
		}
		
		int cnt[10]={0};
		
		for(int i=0; i<n; ++i){
			int c;
			cin>>c;
			
			cnt[c]++;
		}
		
		for(int c=0; c<=9; ++c){
			if(cnt[c]==0){
				puts("-");
			}else{
				for(int j=0; j<cnt[c]; ++j){
					cout<<'*';
				}
				cout<<endl;
			}
		}
	}
}
