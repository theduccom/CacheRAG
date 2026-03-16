#include <iostream>
using namespace std;
int main(){
	while(1){
		int w;
		cin>>w;
		if(w==-1) break;
		if(w<=10){
			cout<<4280-1150<<endl;
		}else if(w<=20&&w>=11){
			cout<<4280-1150-125*(w-10)<<endl;
		}else if(w<=30&&w>=21){
			cout<<4280-1150-125*10-140*(w-20)<<endl;
		}else if(w>=31){
			cout<<4280-1150-125*10-140*10-160*(w-30)<<endl;
		}
	}
}