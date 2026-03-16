#include<iostream>
#include<string>
using namespace std;
int main(){
	int n;
	for(cin>>n;n--;){
		string a,b;
		cin>>a;
		cin>>b;
		if(a.size()<b.size())swap(a,b);
		while(b.size()<a.size())b="0"+b;
		int f=0;
		for(int i=a.size()-1;i>=0;i--){
			a[i]+=(b[i]-'0'+f);
			if(a[i]>'9'){
				a[i]-=10;
				f=1;
			}else f=0;
		}
		if(f)a="1"+a;
		if(a.size()>80)
			cout<<"overflow"<<endl;
		else
			cout<<a<<endl;
		
	}
	return 0;
}