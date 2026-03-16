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
int main(){
	double n,x,t,h;
	while(cin>>x){
		t=x/9.8;
		h=4.9*x*x/(9.8*9.8);
		n=h/5;
		if(h-(int)h!=0) cout<<(int)n+2<<endl;
		else cout<<(int)n+1<<endl;
	}
}