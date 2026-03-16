#include "bits/stdc++.h"

#define REP(i,num) for(int i=0;i<(num);++i)
#define ALL(c) c.begin(),c.end()
#define LOOP(i) while(i--)
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

vector<string> split_naive(const string &s, char delim) {
	vector<string> elems;
	string item;
	for(char ch:s){
		if(ch==delim){
			if(!item.empty()) elems.push_back(item);
			item.clear();
		}
		else{
			item += ch;
		}
	}
	if(!item.empty()) elems.push_back(item);
	return elems;
}

int main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	cout<<fixed<<setprecision(10);

	int N=in();
	REP(n,N){
		vector<vector<int>> M(8,vector<int>(8,0));
		REP(i,8){
			string S=in<string>();
			REP(j,8){
				M[i][j] = S[j]-'0';
			}
		}
		int X=in()-1,Y=in()-1;
		queue<pair<int,int>> Q;
		Q.emplace(X,Y);
		while(!Q.empty()){
			auto P=Q.front();
			Q.pop();
			M[P.second][P.first] = 0;
			REP(i,3){
				if(P.first-i-1>=0 && M[P.second][P.first-i-1]) Q.emplace(P.first-i-1,P.second);
				if(P.first+i+1<8 && M[P.second][P.first+i+1]) Q.emplace(P.first+i+1,P.second);
				if(P.second-i-1>=0 && M[P.second-i-1][P.first]) Q.emplace(P.first,P.second-i-1);
				if(P.second+i+1<8 && M[P.second+i+1][P.first]) Q.emplace(P.first,P.second+i+1);
			}
		}
		cout << "Data " << n+1 << ":" << endl;
		REP(i,8){
			REP(j,8){
				cout<<M[i][j];
			}
			out();
		}
	}

	return 0;
}
