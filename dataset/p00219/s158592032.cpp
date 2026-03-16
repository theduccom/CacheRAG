#include <iostream>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <complex>
#include <cstdio>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int n,k,s[10];

int main(){
	while(cin>>n){
		if(!n)return 0;
		fill(s,s+10,0);
		while(n--){
			cin>>k;
			s[k]++;
		}
		for(int i=0;i<10;i++){
			if(!s[i])cout<<"-"<<endl;
			else{
				for(int j=0;j<s[i];j++)cout<<"*";
				cout<<endl;
			}
		}
	}
}