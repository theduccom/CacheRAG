#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){

	int data[50100+1];
	int state=0;
	//素数表の作成
	for(int i=1;i<=50100;i++){
		data[i]=0;
		state = 0;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				state=1;
				break;
			}
		}
		if(state==0){
			data[i]=1;
		}
	}
	int num;

	while(cin>>num){
		int ans0,ans1;

		for(ans0=num-1;;ans0--){
			if(data[ans0]==1){
				break;
			}
		}
		for(ans1 = num+1;;ans1++){
			if(data[ans1]==1){
				break;
			}
		}
		cout<<ans0<<" "<<ans1<<endl;
	}
	return 0;

}

/*
Sample Input
19
3517
Output for the Sample Input
17 23
3511 3527
*/