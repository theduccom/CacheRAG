#include<iostream>
#include<cstdio>
#include <cstring>
#include<map>
#include<string>
#include<stack>
#include <sstream>
#include<vector>
using namespace std;


int main(){
	int n;
	while(cin>>n)
	{
		if(n==0)break;
		int ice[10010]={0};
		for(int i=0; i<n; i++)
		{
			int kari;
			cin>>kari;
			ice[kari]++;
		}
		
		for(int i=0; i<10; i++)
		{
			if(ice[i]==0)cout<<"-";
			while(1)
			{
				if( ice[i]==0 )break;
				ice[i]+= -1;
				cout<<"*";
			}
			cout<<endl;
		}		
	}
	return 0;
}