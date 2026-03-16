#include<iostream>
using namespace std;
int main(){
	int w;
	while(cin>>w){
		int cost=1150;
		if(w==-1)break;
		for(int i=10;i<w;i++){
			if(i<20)cost+=125;
			else if(i<30)cost+=140;
			else cost+=160;
		}
		cout<<4280-cost<<endl;
	}
	return 0;
}