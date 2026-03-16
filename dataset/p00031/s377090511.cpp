#include<iostream>
#include<cmath>
#include<string>
#define loop(i,a,b) for(int i=a;i<b;i++)
#define rep(i,a) loop(i,0,a)
using namespace std;

string ans;

void func(int cnt,int w,string s){
 	if(cnt>=10){
 		if(w==0){
 			ans=s;
 		}
 	}else{
 		func(cnt+1,w,s);
 		s+=cnt+'0';
 		func(cnt+1,w-pow(2,cnt),s);
 	}
 }

int main(){
	int n;
	string s;
	while(cin>>n){
		s="";
		func(0,n,s);
		rep(i,ans.size()){
			cout<<pow(2,(int)(ans[i]-'0'));
			if(i==(ans.size()-1)){
				cout<<endl;
			}else{
				cout<<" ";
			}
		}
	}
	return 0;
}