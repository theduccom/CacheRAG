#include<iostream>
#define N 4280
using namespace std;

int main(){
	
	int w;
	while(cin>>w){
		int s=0;
		if(w!=-1){
		if(w<=10)
			s=1150;
		else if(w<=20)
			s=1150+(w-10)*125;
		else if(w<=30)
			s=1150+10*125+(w-20)*140;
		else if(w>30)
			s=1150+10*125+10*140+(w-30)*160;
			
		cout<<N-s<<endl;
	}
		else
			break;
	}
		
	
}