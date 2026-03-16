#include<bits/stdc++.h>
using namespace std;

main(){
	while(true){
		int n;
		cin>>n;
		
		if(n<=0){
			break;
		}
		
		int maxV=-1, maxP=0;
		for(int i=0; i<n; ++i){
			//患者の番号、一回目に歩いた距離、二回目に歩いた距離
			int p, d1, d2;
			cin>>p>>d1>>d2;
			
			if(maxV < d1+d2){
				maxV = d1 + d2;
				maxP = p;
			}
		}
		
		printf("%d %d\n",maxP,maxV);
	}
}
