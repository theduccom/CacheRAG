#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int w;
	while(1){
		cin>>w;
		if(w==-1) break;
		int cost=0;
		if(w>30){
			cost += (w-30)*160;
			w = 30;
		}
		if(w<=30 && w>20){
			cost += (w-20)*140;
			w = 20;
		}
		if(w<=20 && w>10){
			cost += (w-10)*125;
			w = 10;
		}
		if(w<=10){
			cost += 1150;
		}
		cout<<4280-cost<<endl;
	}
	return 0;
}