#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
#include <cstring>
using namespace std;

char ary[200];
int main(){
	map<char,int> ma;
	ma.insert(make_pair('I',1));
	ma.insert(make_pair('V',5));
	ma.insert(make_pair('X',10));
	ma.insert(make_pair('L',50));
	ma.insert(make_pair('C',100));
	ma.insert(make_pair('D',500));
	ma.insert(make_pair('M',1000));
	while(true){
		cin>>ary;
		if(cin.eof()) break;
		int res=0;
		int n=strlen(ary);
		for(int i=0;i<n-1;i++){
			if(ma[ary[i]]<ma[ary[i+1]]){
				res-=ma[ary[i]];
			}
			else{
				res+=ma[ary[i]];
			}
		}
		res+=ma[ary[n-1]];
		cout<<res<<endl;
	}
	return 0;
}