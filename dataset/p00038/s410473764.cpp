using namespace std;
#include <iostream>
#include <string>
#include <set>
#include <functional>
#include <vector>
#include <algorithm>
#include <stdio.h>
string s;
string solve(){
	int card[5]={},t=0,num[14]={};
	for(int i=0;i<(int)s.length();i++){
		if(s[i]==',')t++;
		else card[t]=card[t]*10+s[i]-'0';
	}
	//for(int i=0;i<5;i++)cout<<card[i]<<endl;
	for(int i=0;i<5;i++)num[card[i]]++;
	sort(num,num+14,greater<int>());
	if(num[0]==4)return "four card";
	else if(num[0]==3&&num[1]==2)return "full house";
	else if(num[0]==3)return "three card";
	else if(num[0]==2&&num[1]==2)return "two pair";
	else if(num[0]==2)return "one pair";
	else{
		sort(card,card+5);
		if(card[0]==1&&card[1]==10&&card[2]==11&&card[3]==12&&card[4]==13)return "straight";
		for(int i=0;i<4;i++){
			if(card[i+1]-card[i]!=1)return "null";
		}
		return "straight";
	}
}
int main()
{
	while(getline(cin,s)){
		cout<<solve()<<endl;
	}
    return 0;
}