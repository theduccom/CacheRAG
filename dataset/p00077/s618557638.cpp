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
#define sort(ss) sort(ss.begin(), ss.end())
#define rsort(ss) sort(ss.rbegin(), ss.rend())
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return acos(-1.0);
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	string ss,ans;
	int r=0;
	while(cin>>ss){
		int e=size(ss);
		for(int i=0;i<e;i++){
			if(ss[i]=='@'){
				for(int x=0;x<10;x++){
					if(ss[i+1]=='0'+x){
						r=x;
						break;
					}
				}
				for(int x=0;x<r;x++){
					cout<<ss[i+2];
				}
				i+=2;
			}
			else{
				cout<<ss[i];
			}
		}
		cout<<endl;
	}
}