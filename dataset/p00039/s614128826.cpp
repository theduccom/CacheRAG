#include "bits/stdc++.h"

#define REP(i,num) for(int i=0;i<(num);++i)
#define LOOP(i) while(i--)
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

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	
	map<char,int> M;
	M['I'] = 1;
	M['V'] = 5;
	M['X'] = 10;
	M['L'] = 50;
	M['C'] = 100;
	M['D'] = 500;
	M['M'] = 1000;

	string S;
	while(cin>>S){
		int sum = 0;
		int N=S.size();
		
		for(int i=0;i<N;){
			if(i<N-1 && M[S[i]]<M[S[i+1]]){
				sum += M[S[i+1]]-M[S[i]];
				i+=2;
			}
			else{
				sum += M[S[i]];
				i++;
			}
		}
		out(sum);
	}
	return 0;
}
