#include <iostream>
#include <utility>
#include <algorithm>
#include <string>
#include <vector>
#include <cstdio>
#include <cmath>

using namespace std;

string s1,s2;

int str_to_num(string s){
	int a=0;
	for(int i=0; i<s.size(); i++){
		int b=s.at(s.size()-1-i)-'0';
		for(int j=0; j<i; j++){
			b*=10;
		}
		a+=b;
	}
	return a;
}

int calcMax(string s){
	sort(s.begin(),s.end());
	reverse(s.begin(),s.end());
	return str_to_num(s);
}

int calcMin(string s){
	sort(s.begin(),s.end());
	return str_to_num(s);
}

int main(){
	int n;
	string s;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>s;
		cout<<calcMax(s)-calcMin(s)<<endl;
	}
}