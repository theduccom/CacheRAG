#include "bits/stdc++.h"

#define REP(i,num) for(int i=0;i<(num);++i)
#define ALL(c) c.begin(),c.end()
#define PRINTALL(c) for(auto& x:c){cout<<x<<' ';}cout<<endl;
#define PAIRCOMP(c,comp) [](const pair<ll,ll>& lhs,const pair<ll,ll>& rhs){return lhs.c comp rhs.c;}

using namespace std;
using ll = long long;

constexpr ll atcoder_mod = 1e9+7;

template<typename T=int>
T in(){T x; cin >> x; return (x);}
template<typename T=int,typename C=vector<T>>
C vecin(int N){C x(N);REP(i,N){x[i]=in<T>();}return move(x);}

void vout(){cout << endl;}
template<typename Head,typename... Tail>
void vout(Head&& h,Tail&&... t){cout << ' ' << h;vout(forward<Tail>(t)...);}
void out(){cout << endl;}
template<typename Head,typename... Tail>
void out(Head&& h,Tail&&... t){cout << h;vout(forward<Tail>(t)...);}

string replace_string(string O,string S,string Q,string R){
	string::size_type pos(O.find(Q));

	while(pos!=string::npos){
		S.replace(pos,Q.length(),R);
		pos = O.find(Q,pos+R.length());
	}

	return S;
}
int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);

	char str[1010];
	cin.getline(str,sizeof(str));
	string O(str),S(str);
	S = replace_string(O,S,"apple","peach");
	S = replace_string(O,S,"peach","apple");
	out(S);
	return 0;
}
