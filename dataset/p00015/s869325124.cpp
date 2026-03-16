#include<iostream>
#include<algorithm>
#include<sstream>
#include<string>
using namespace std;
int main(){
	int n;
	for(cin>>n;n--;){
		string a,b;
		cin>>a;
		cin>>b;
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		while(a.size()<b.size())a+='0';
		while(b.size()<a.size())b+='0';
		int f=0;
		for(int i=0;i<a.size();i++){
			if(a[i]+(b[i]-'0')+f>'9'){
				a[i]+=+(b[i]-'0')+f-10;
				f=1;
			}else{
				a[i]+=+(b[i]-'0')+f;
				f=0;
			}
		}
		reverse(a.begin(),a.end());
		if(f)a="1"+a;
		if(a.size()>80){
			cout<<"overflow"<<endl;
		}else{
			for(int i=0;i<a.size();i++){
				if(a[i]!=0)
				cout<<a[i];
			}
			cout<<endl;
		}
	}
	return 0;
}