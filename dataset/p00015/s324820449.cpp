#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int N,ans[82],a,b,la,lb,up,deg;
string sta,stb;

int main(){
	cin>>N;
	for(int i=0;i<N;i++){
		cin>>sta>>stb;
		la=sta.size();
		lb=stb.size();
		up=0;
		deg=1;
		for(int i=0;i<max(la,lb)+1;i++){
			if(i>=la)a='0';
			else a=sta[la-1-i];
			if(i>=lb)b='0';
			else b=stb[lb-1-i];
			if(min(a,b)>80){
				cout<<"overflow"<<endl;
				continue;
			}
			if(a+b+up>105){
				ans[i]=a+b+up-10-96;
				up=1;
			}
			else{
				ans[i]=a+b+up-96;
				up=0;
			}
			if(ans[i]!=0)deg=i+1;
		}
		if(deg>80)cout<<"overflow"<<endl;
		else{
			for(int i=0;i<deg;i++)cout<<ans[deg-1-i];
			cout<<endl;
		}
	}
}