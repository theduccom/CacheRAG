#include<iostream>
#include<cmath>
using namespace std;

int main(){
	string ss;
	int A=0,B=0,O=0,AB=0;
	while(cin>>ss){
		int cnt=0;
		for(int i=0;i<ss.size();i++){
			if(ss[i]==','){
				cnt=i;
				break;
			}
		}
		if((ss.size()-(cnt+1))>1){
			AB++;
		}else{
			if(ss[ss.size()-1]=='A')A++;
			else if(ss[ss.size()-1]=='B')B++;
			else O++;
		}
	}
	cout<<A<<endl;
	cout<<B<<endl;
	cout<<AB<<endl;
	cout<<O<<endl;
	return 0;
}