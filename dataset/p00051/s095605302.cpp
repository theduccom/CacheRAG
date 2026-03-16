#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <cstdio>
#include <math.h>
#include <map>
#include <queue>
#include <string>
using namespace std;

int N,n[8];
string s;

int main(){
	cin>>N;
	while(cin>>s){
		for(int i=0;i<8;i++)n[i]=s[i]-'0';
		sort(n,n+8);
		int M=0,m=0;
		for(int i=0;i<8;i++){
			M+=n[i]*pow(10,i);
			m+=n[7-i]*pow(10,i);
		}
		cout<<M-m<<endl;
	}
}