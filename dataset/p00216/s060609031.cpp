#include <iostream>
using namespace std;
int main(){
	int x;
	while(1){
		cin>>x;
		if(x==-1) break;
		else if(0<=x&&x<=10) cout<<4280-1150<<endl;
		else if(11<=x&&x<=20) cout<<4280-1150-125*(x-10)<<endl;
		else if(21<=x&&x<=30) cout<<4280-1150-125*10-140*(x-20)<<endl;
		else if(31<=x) cout<<4280-1150-125*10-140*10-160*(x-30)<<endl;
	}
}