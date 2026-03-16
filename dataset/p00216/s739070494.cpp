#include<iostream>
#include<cstdio>
#include <cstring>
#include<map>
#include<string>
#include<stack>
#include <sstream>
#include<vector>
using namespace std;

int ryoukin(int n){
	int ans;
	if(n<=10) ans=1150;
	else if(n<=20) ans=1150+ ((n-10)*125);
	else if(n<=30) ans= 1150 + 1250 + ((n-20)*140);
	else ans = 1150 + 1250 + 1400 + ((n-30)*160);
	return ans;
}


int main(){
	int n;
	while(cin>>n)
	{
		if(n==-1) break;
		cout<< 4280-ryoukin(n) <<endl;
	}
	return 0;
}