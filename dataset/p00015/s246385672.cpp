#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

int N;
const int MAX = 100;
string S,T;

deque<int> sum_str(string s,string t)
{
	deque<int> res;
	bool carry = false;
	for(int i = 0;i < max(s.size(),t.size()) || carry;i++){
		res.push_front(carry);
		carry = false;
		if(i < s.size()){
			res.front() += s [s.size() - i - 1] - '0';
		}
		if(i < t.size()){
			res.front() += t [t.size() - i - 1] - '0';
		}
		if(res.front() >= 10){
			res.front() %= 10;
			carry = true;
		}
	}
	
	return res;
}

int main()
{
	cin >> N;
	FOR(i,0,N){
		cin >> S >> T;
		deque<int> ans = sum_str(S,T);
		if(ans.size() <= 80){
			FOR(i,0,ans.size()){
				cout << ans [i] << (i == ans.size() - 1 ? "\n" : "");
			}
		}
		else{
			cout << "overflow" << endl;
		}
	}

	return 0;
}