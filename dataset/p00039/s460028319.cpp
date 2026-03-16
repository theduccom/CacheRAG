#include<iostream>
#include<string>
#include<map>
using namespace std;
string str;
int sum,size;
map <char,int> t;
int main(){
	t['I']=1;
	t['V']=5;
	t['X']=10;
	t['L']=50;
	t['C']=100;
	t['D']=500;
	t['M']=1000;
	while(cin>>str){
		size=str.size();
		sum=0;
		for(int i=0;i<size-1;i++){
			if(t[str[i]]<t[str[i+1]])sum-=t[str[i]];
			else sum+=t[str[i]];
		}
		cout<<sum+t[str[size-1]]<<endl;
	}
}