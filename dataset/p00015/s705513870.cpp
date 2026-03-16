#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <cctype>
#include <complex>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <functional>
#include <vector>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <numeric>
#define INF 1<<30
#define EPS 1e-15
#define PB push_back
#define fi first
#define se second
#define rep(i,j) for(int  i = 0; i < (j); i++)
#define reps(i,j,k) for(int i = j; i < k; i++)
#define MOD 1000000007
using namespace std;
typedef long long ll;
typedef pair<int,int> Pii;
typedef vector < int > vi;
typedef vector < vi > vvi;
bool compare(string a,string b){
	if(b.size() > a.size())return true;
	if(b.size() < a.size())return false;
	rep(i,a.size()){
		if(b[i] > a[i])return true;
		if(b[i] < a[i])return false;
	}
	return false;	
}
string divide(string a){
	int carry = 0;
	string ans = "";
	rep(i,a.size()){
		int tmp = a[i]-'0'+10*carry;
		if(tmp == 1){
			carry = 1;
			if(i != 0)ans += "0";
			continue;
		}
		ans += (tmp/2)+'0';
		if(tmp%2==1){
			carry = 1;
		}
		else{
			carry = 0;
		}
	}
	return ans;
}
string long_calc_p(string a,string b){
	string ans = "";
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int sz;
	int mi;
   	if(a.size() > b.size()){
   		sz = a.size();
  		mi = b.size();
	}
   	else{
		sz = b.size();
		mi = a.size();
  	}
	int carry = 0;
	rep(i,sz){
		if(i >= mi){
			if(mi == a.size()){
				int tmp = b[i]-'0'+carry;
				if(tmp > 9){
					carry = 1;
					ans += tmp-10+'0';
				}
				else{
					carry = 0;
					ans += tmp+'0';
				}
			}
			else{
				int tmp = a[i]-'0'+carry;
				if(tmp > 9){
					carry = 1;
					ans += tmp-10+'0';
				}
				else{
					carry = 0;
					ans += tmp+'0';
				}
			}
		}
		else{
			int tmp = a[i]-'0'+b[i]-'0'+carry;
			if(tmp > 9){
				carry = 1;
				ans += tmp-10+'0';
			}
			else{
				carry = 0;
				ans += tmp+'0';
			}
		}
	}
	if(carry)ans+="1";
	reverse(ans.begin(),ans.end());
	return ans;
}
string long_calc_m(string a,string b){
	string ans = "";
	string l="",r="";
	l = "0";
	rep(i,1020)r+="9";	
	while(long_calc_p(l,"1") != r){
		string med = divide(long_calc_p(l,r));
		string tmp = long_calc_p(med,b);
		if(tmp == a){
			ans = med;
			break;
		}
		if(compare(a,tmp)){
			r = med;
		}
		else{
			l = med;
		}
	}
	if(ans == "")ans = "0";
	return ans;
}
int main(){
	string a,b;
	char _a[1024],_b[1024];
	int n;
	scanf("%d",&n);
	while(n--){
		scanf("%s%s",_a,_b);
		a = _a;
		b = _b;
		if(long_calc_p(a,b).size() > 80)puts("overflow");
		else printf("%s\n",long_calc_p(a,b).c_str());
	}
	return 0;
}