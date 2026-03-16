#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
int main(){
	
	
	string d;
	map<char,int> a;
	a['I']=1;
	a['V']=5;
	a['X']=10;
	a['L']=50;
	a['C']=100;
	a['D']=500;
	a['M']=1000;
	while(cin>>d){
	int s=0,m=100000000;
	for(int i=0;i<d.size();i++){
		int k=a[d[i]];
		if(m<k) s-=m*2;
		s+=k;
		m=k;			
	}
	
	cout<<s<<endl;
	}
	
}