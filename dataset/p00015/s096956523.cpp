#include <algorithm>
#include <iostream>
using namespace std;
string add(string a,string b){
	string res;
	int sa=a.size(),sb=b.size(),va,vb,t=0;
	for(int i=1;i<=max(sa,sb);i++){
		if(sa-i<0)va=0;else va=a[sa-i]-'0';
		if(sb-i<0)vb=0;else vb=b[sb-i]-'0';
		if(t)va++;
		t=((va+vb)>9);res=(char)(va+vb-t*10+'0')+res;
	}
	if(t)res="1"+res;
	return res;
}
int main() {
	string a,b;
	int n;
	for(cin>>n;n--;){
		cin>>a>>b;
		a=add(a,b);
		if(a.size()>80){
			cout<<"overflow"<<endl;
		}else{
			cout<<a<<endl;
		}
	}
	return 0;
}