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
	double a,ans[11]={},ss;
	while(cin>>a){
		ss=0;
		ans[1]=a;
		fu(1,11){
			if(i==1) ss=ans[1];
			else if(i%2==0){
				ans[i]=ans[i-1]*2;
				ss+=ans[i];
			}
			else{
				ans[i]=ans[i-1]/3;
				ss+=ans[i];
			}
		}
		printf("%.8lf\n",ss);
	}
}