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
using namespace std;
int size(string x){
	string::size_type size=x.size();
	return size;
}
#define fu(l,k) for(int i=l;i<k;i++)
#define fd(l,k) for(int i=l;i>k;i--)
#define fi first
#define se second
typedef  vector<string> vs;
typedef  vector<int> vi;
double pi(){
	return M_PI;
}
typedef set<int> set_i;
typedef set<string> set_s;
int INF=1000000;
int main(){
	int n,ans,ss,a2,a5,is;
	while(1){
		ss=1;
		a5=0;
		a2=0;
		cin>>n;
		if(n==0) break;
		fd(n,0){
			is=i;
			while(1){
				if(is%5==0){
					a5++;
					is=is/5;
				}
				else break;
			}
			while(1){
				if(is%2==0){
					a2++;
					is=is/2;
				}
				else break;
			}
		}
		if(a5>=a2) cout<<a2<<endl;
		else cout<<a5<<endl;
	}
}