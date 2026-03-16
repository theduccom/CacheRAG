#include <bits/stdc++.h>
using namespace std;
int main(){
	int w;
	while(1){
		cin>>w;
		if(w==-1)break;
		int res=1150;
		if(w>10)res+=(w-10)*125;
		if(w>20)res+=(w-20)*15;
		if(w>30)res+=(w-30)*20;
		cout<<4280-res<<endl;
	}
}