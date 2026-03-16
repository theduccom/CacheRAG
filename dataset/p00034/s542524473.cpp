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
	double l[11]={},ll=0,lb;
	double v1,v2,ans;
	double m;
	char a;
	while(cin>>l[0]>>a>>l[1]>>a>>l[2]>>a>>l[3]>>a>>l[4]>>a>>l[5]>>a>>
		l[6]>>a>>l[7]>>a>>l[8]>>a>>l[9]>>a>>v1>>a>>v2){
		ll=0;
		for(int i=0;i<10;i++){
			ll+=l[i];
		}
		m=ll/(v1+v2);
		lb=0;
		for(int i=0;i<10;i++){
			lb+=l[i];
			if(m*v1<=lb){
				ans=i+1;
				break;
			}
		}
		cout<<(int)ans<<endl;
	}
}