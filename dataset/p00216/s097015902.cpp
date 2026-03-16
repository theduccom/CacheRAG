#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

	int n;
	int q;
	while(cin>>q&&q!=-1){
		int val=1150;
		if(q>10){
			int m=min(q,20)-10;
			val+=m*125;
		}
		if(q>20){
			int m=min(q,30)-20;
			val+=m*140;
		}
		if(q>30){
			int m=q-30;
			val+=m*160;
		}
		cout<<4280-val<<endl;
	}
	return 0;
}