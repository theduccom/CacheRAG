#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<cstdio>
#include<cmath>
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,b) loop(i,0,b)
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
using namespace std;
int main(){
	int a,b;
	bool h=true;
	while(cin>>a>>b,a|b){
		if(!h)cout<<endl;
		h=false;
		int co=0;
		loop(i,a,b+1){
			if(i%4!=0||(i%100==0&&i%400!=0));
			else{cout<<i<<endl;co++;}
		}
		if(!co)cout<<"NA"<<endl;
	}	
}