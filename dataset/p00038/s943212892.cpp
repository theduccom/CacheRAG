#include<iostream>
#include<string>
using namespace std;
int t[15],in[5],twoC,threeC,fourC,flg;


string solve(){
	
	for(int i=0;i<15;i++)t[i]=0;
	for(int i=0;i<5;i++){
		t[in[i]]++;
		if(in[i]==1)t[14]++;
	}
	flg=twoC=threeC=fourC=0;
	for(int i=1;i<=13;i++){
		if(t[i]==4)fourC++;
		if(t[i]==3)threeC++;
		if(t[i]==2)twoC++;
	}
	if(fourC)return "four card";
	if(threeC&&twoC) return "full house";

	
	for(int i=1;i<=14;i++){
		if(t[i]>0)flg++;
		else flg=0;
		if(flg==5)return "straight";
	}
	
	if(threeC)return "three card";
	if(twoC==2)return "two pair";
	if(twoC==1)return "one pair";
	
	return "null";
}

int main(){
	char ch;
	while(cin>>in[0]>>ch>>in[1]>>ch>>in[2]>>ch>>in[3]>>ch>>in[4]){
	
		string str=solve();
		cout<<str<<endl;
	}
	return 0;
}