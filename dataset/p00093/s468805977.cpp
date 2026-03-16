#include<iostream>
using namespace std;
int main(){
	int cnt2=0;
	while(true){
		int a,b;
		cin>>a>>b;
		if(a==0 && b==0){break;}
		if(cnt2>=1){cout<<endl;}
		cnt2++;
		int cnt=0;
		for(int i=a;i<=b;i++){
			if(i%400==0){cout<<i<<endl;cnt++;}
			else if(i%4==0 && i%100>=1){cout<<i<<endl;cnt++;}
		}
		if(cnt==0){cout<<"NA"<<endl;}
	}
}