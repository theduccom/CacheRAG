#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
	int w,ans=0,mae=4280;
	while(cin>>w,w!=-1){
		if(w<10){
		ans=1150;
		}
		else if(w>=10&&w<20){
			ans=1150+125*(w-10);
		}
		else if(w>=20&&w<30){
			ans=1150+1250+140*(w-20);
		}
		else {
			ans=1150+1250+1400+160*(w-30);
		}
		cout<<mae-ans<<endl;
		//mae=ans;
		//ans=0;
	}
}