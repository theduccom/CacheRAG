#include <iostream>
using namespace std;
int calc(int w){
	int money=1150;
	if(w>30){
		money+=(w-30)*160+10*140+10*125;
	}else if(w>20){
		money+=(w-20)*140+10*125;
	}else if(w>10){
		money+=(w-10)*125;
	}
	return money;
}
int main(){
	int w;
	while(cin>>w){
		if(w==-1)break;
		cout<<(4280-calc(w))<<"\n";
	}
	return 0;
}