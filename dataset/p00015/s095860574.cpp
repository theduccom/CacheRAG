#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
#include <map>
#include <queue>
#include <stack>
#include <set>
#include <functional>
#include <sstream>
using namespace std;

#define REP(i,a,n) for(int i=(a);i<(int)(n);i++)
#define rep(i,n) REP(i,0,n)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()

int main(){
	string in1,in2;
	int t; scanf("%d",&t);
	while(t--){
		char str[100];
		cin>>in1>>in2;
		if( in1.size()>80 || in2.size()>80 ){
			puts("overflow"); continue;
		}
		reverse(all(in1)); reverse(all(in2));
		int k = 0;
		int i;
		for(i=0; i<min(in1.size(),in2.size()); i++){
			k = (in1[i]-'0')+(in2[i]-'0') + k;
			str[i] = (k%10)+'0';
			k /= 10;
		}
		if( i==in1.size() ){ //in2
			for(; i<in2.size(); i++){
				k = (in2[i]-'0')+k;
				str[i] = (k%10)+'0';
				k /= 10;
			}
		}else{ //in1
			for(; i<in1.size(); i++){
				k = (in1[i]-'0')+k;
				str[i] = (k%10)+'0';
				k /= 10;
			}
		}
		if( k!=0 )str[i++] = k+'0';
		str[i] = 0;
		if( i>80 ){
			puts("overflow"); continue;
		}
		reverse(str,str+i);
		puts(str);
	}
	
	return 0;
}