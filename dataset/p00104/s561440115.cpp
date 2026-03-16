#include<cstdio>
#include<algorithm>
#include<functional>
#include<iostream>
#include<string>
using namespace std;
int main(void)
{
	int i,j,k,h,w,cnt;
	char mp[101][101];
	while(1) {
		cin>>h>>w;
		if(h==0&&w==0)break;
		for(i=0;i<h;i++) 
			for(j=0;j<w;j++) cin>>mp[i][j];
		cnt=0;
		i=0,j=0;
		while(1) {
			if('>'==mp[i][j]) j++,cnt++;
			if('v'==mp[i][j]) i++,cnt++;
			if('^'==mp[i][j]) i--;cnt++;
			if('<'==mp[i][j]) j--,cnt++;
			if('.'==mp[i][j]) {
				cout<<j<<" "<<i<<endl;
				break;
			}
			if(cnt>10000) {
				cout<<"LOOP"<<endl;
				break;
			}
		}
	}
}