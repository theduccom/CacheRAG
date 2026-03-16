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
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	string s,s1,s2;
	int a,ans=0,q,qq;
	while(cin>>s){
		a=size(s);
		if(a%2==0){
			s1=s.substr(0,a/2);
			reverse(s.begin(), s.end());
			s2=s.substr(0,a/2);
			if(s1==s2) ans++;
		}
		else{
			s1=s.substr(0,(a-1)/2);
			reverse(s.begin(), s.end());
			s2=s.substr(0,(a-1)/2);
			if(s1==s2) ans++;
		}
	}
	cout<<ans<<endl;
}