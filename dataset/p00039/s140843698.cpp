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
	string s;
	int ans,sl,q;
	while(cin>>s){
		if(s=="EOF") break;
		ans=0;
		q=INF;
		sl=size(s);
		for(int i=0;i<sl;i++){
			if(s[i]=='I'){
				if(q>=1) ans+=1;
				else ans-=1;
				q=1;
			}
			if(s[i]=='V'){
				if(q>=5) ans+=5;
				else ans=ans+5-q-q;
				q=5;
			}
			if(s[i]=='X'){
				if(q>=10) ans+=10;
				else ans=ans+10-q-q;
				q=10;
			}
			if(s[i]=='L'){
				if(q>=50) ans+=50;
				else ans=ans+50-q-q;
				q=50;
			}
			if(s[i]=='C'){
				if(q>=100) ans+=100;
				else ans=ans+100-q-q;
				q=100;
			}
			if(s[i]=='D'){
				if(q>=500) ans+=500;
				else ans=ans+500-q-q;
				q=500;
			}
			if(s[i]=='M'){
				if(q>=1000) ans+=1000;
				else ans=ans+1000-q-q;
				q=1000;
			}
		}
		cout<<ans<<endl;
	}
}