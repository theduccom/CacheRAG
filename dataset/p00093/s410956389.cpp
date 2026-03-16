#include <algorithm>
#include <vector>
#include <math.h>
#include <stdio.h>
#include <cctype>
#include <iostream>
#include <set>
#include <string>
#include <queue>
#include <map>
#include <utility>
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	int a,b,ss,wa=0;
	while(1){
		cin>>a>>b;
		if(a==0&&b==0) break;
		if(wa!=0) cout<<endl;
		wa++;
		ss=0;
		for(int sr=a;sr<=b;sr++){
			if(sr%4==0){
				if(sr%100!=0){
					cout<<sr<<endl;
					ss++;
				}
				else if(sr%400==0){
					cout<<sr<<endl;
					ss++;
				}
			}
		}
		if(ss==0) cout<<"NA"<<endl;
	}
}