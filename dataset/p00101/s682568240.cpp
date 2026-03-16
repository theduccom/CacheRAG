#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){

	int N;
	string s,ans;
	string hoshino="Hoshino";
	string hoshina="Hoshina";

	cin>>N;getline(cin,s);
	for(int i=0;i<N;i++)
	{
		getline(cin,s);
	//	cout<<s;
		ans=s;
		while(1){
		int x=s.find("Hoshino",0);
		if(x==string::npos )break;
		for(int i=x;i<x+7;i++)
		{
			ans[i]=hoshina[i-x];
			s[i]='-';
		}
		
		}
cout<<ans<<endl;
	}
	return 0;
}
			