#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
int number(char c){
	if(c>='0'&&c<='9')
	return (c-'0');
	else
		return 0;
}
int main(){
	int n;
	cin>>n;
	
	while(n>0){
		string a;
		string b;
	int k=0;
	int c=0;
	string s="";
	
		cin>>a;
		cin>>b;
		
	
	for(int i=a.length()-1,j=b.length()-1;i>=0||j>=0;i--,j--){
		int d;
		int n1=0,n2=0;
		if(i>=0)
			n1=number(a[i]);
		if(j>=0)
			n2=number(b[j]);
		d=n1+n2+k;
		k=d/10;
		d=d%10;
		s=to_string(d)+s;
	}
		if(k>0)
		s=to_string(k)+s;
	
	if(s.length()>80)
		cout<<"overflow"<<endl;
	else
		cout<<s<<endl;
		n--;
	}
}