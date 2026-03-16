#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	string a,b,c;
	cin>>a>>b;
	if(a.size()<b.size())swap(a,b);
	int as=a.size(),bs=b.size();
	for(int i=0;i<as-bs;i++)b="0"+b;
	c=a;
	bool kuri=false;
	int sum=0;
	for(int i=a.size()-1;i>=0;i--){
		 sum=a[i]-'0';
		char now;
		sum=sum+b[i]-'0';
		if(kuri)sum++;
		if(sum>=10){
			kuri=true;
				sum-=10;
				//cout<<"a";
		}
		else{
			kuri=false;
		}
		now=sum+'0';
		//cout<<sum;
		c[i]=now;
	}
	if(kuri)c="1"+c;
	
	if(c.size()>80)cout<<"overflow"<<endl;
	else cout<<c<<endl;
	c.clear();
	}
	return 0;
}