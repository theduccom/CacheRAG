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
	//cin.tie(0);
	//ios::sync_with_stdio(false);
	cout<<fixed<<setprecision(10);

	string S;
	vector<pair<double,double>> P;
	while(cin>>S){
		auto T = split_naive(S,',');
		double x,y;
		sscanf(T[0].c_str(),"%lf",&x);
		sscanf(T[1].c_str(),"%lf",&y);
		P.emplace_back(x,y);
	}

	double sum = 0;
	for(int i=0,ei=P.size()-2;i<ei;i++){
		double a = hypot(P[i+1].first-P[0].first,P[i+1].second-P[0].second);
		double b = hypot(P[i+1].first-P[i+2].first,P[i+1].second-P[i+2].second);
		double c = hypot(P[i+2].first-P[0].first,P[i+2].second-P[0].second);
		double z = (a+b+c)/2.0;
		sum += sqrt(z*(z-a)*(z-b)*(z-c));
	}
	out(sum);
	
	return 0;
}
