#include<bits/stdc++.h>
using namespace std;
bool judge(int a){
	for(int n=2;n<a;n++){
		if(a%n==0){
			return false;
		}
	}
		return true;
}

int jat(int a){
	for(int n=0;n<a;n++){
		if(judge(a)){
			if(judge(a-2)){
				return a;
			}
		}
		a--;
	}
	return a;
}
		
		
int main(){
	while(true){
		int a,ans;
		cin>>a;
		if(a==0){
			break;
		}
		ans=jat(a);
		printf("%d %d\n",ans-2,ans);
	}
}


