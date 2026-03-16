#include<iostream>
#include<string>
#include <stdio.h>
#include <math.h>
#include <cctype>
#include<queue>
#include<stack>
#include<cstdio>
#include <algorithm>
#include <cstdio>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<=s.size();i++){
			s[i]=toupper(s[i]);
		}
		cout<<s<<endl;
		return 0;
}