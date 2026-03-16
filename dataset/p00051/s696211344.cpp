#include "bits/stdc++.h"
using namespace std;

#include <iostream>
#include <string>
#include <typeinfo>
int main(){
int n;
cin>>n;
for (int i = 0; i < n; ++i) {
string s;
int maxv=0,minv=0;
int data[8]={0};

cin>>s;
for (int i = 0; i < 8; ++i) {
	data[i]=s[i]-'0';
}
std::sort(data,data+8,greater<int>());//???????????????
	maxv=data[0]*10000000+data[1]*1000000+data[2]*100000+data[3]*10000+data[4]*1000+data[5]*100+data[6]*10+data[7]*1;
	minv=data[7]*10000000+data[6]*1000000+data[5]*100000+data[4]*10000+data[3]*1000+data[2]*100+data[1]*10+data[0]*1;
	cout<<maxv-minv<<endl;
}
}
//data.begin(),data.end(),std::greater<int>()
//const std::string str("123");
//auto num = std::atoi(str.c_str())