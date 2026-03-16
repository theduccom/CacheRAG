#include "bits/stdc++.h"

#define REP(i,num) for(int i=0;i<(num);++i)
#define ALL(c) c.begin(),c.end()
#define LOOP(i) while(i--)
#define PRINTALL(c) for(auto pitr=c.begin();pitr!=c.end();++pitr){cout<<*pitr;if(next(pitr,1)!=c.end())cout<<' ';}cout<<endl;
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
	//cin.tie(0);
	//ios::sync_with_stdio(false);
	cout<<fixed<<setprecision(10);

	int N=in();
	LOOP(N){
		string S=in<string>();
		vector<string> TA;
		stack<int> IP;
		stack<string> SIP;

		int M=S.size();
		string buf;
		S.insert(0,"(");
		S.insert(M,")");
		REP(i,M+1){
			char ch=S[i];
			if(ch!='+' && ch!='-' && ch!='*' && ch!='/' && ch!='(' && ch!=')'){
				buf.push_back(ch);
			}
			else if(ch!='('){
				if(!buf.empty()) TA.push_back(buf);
				buf.clear();
				if(ch=='+' || ch=='-'){
					while(!SIP.empty()){
						if(SIP.top()=="("){
							break;
						}
						TA.push_back(SIP.top());
						SIP.pop();
					}
					SIP.push(string(1,ch));
				}
				else if(ch=='*' || ch=='/'){
					if(!SIP.empty() && (SIP.top()=="*" || SIP.top()=="/")){
						TA.push_back(SIP.top());
						SIP.pop();
					}
					SIP.push(string(1,ch));
				}
				else if(ch==')'){
					while(!SIP.empty()){
						if(SIP.top()=="("){
							SIP.pop();
							break;
						}
						TA.push_back(SIP.top());
						SIP.pop();
					}
				}
			}
			else if(ch=='('){
				SIP.push("(");
			}
		}
		if(!buf.empty()) TA.push_back(buf);
		while(!SIP.empty()){
			TA.push_back(SIP.top());
			SIP.pop();
		}
		for(auto& x:TA){
			if(x!="+" && x!="-" && x!="*" && x!="/"){
				int V;
				sscanf(x.c_str(),"%d",&V);
				IP.push(V);
			}
			else if(x=="+"){
				int V=IP.top();IP.pop();
				int U=IP.top();IP.pop();
				IP.push(V+U);
			}
			else if(x=="*"){
				int V=IP.top();IP.pop();
				int U=IP.top();IP.pop();
				IP.push(V*U);
			}
			else if(x=="-"){
				int V=IP.top();IP.pop();
				int U=IP.top();IP.pop();
				IP.push(U-V);
			}
			else if(x=="/"){
				int V=IP.top();IP.pop();
				int U=IP.top();IP.pop();
				IP.push(U/V);
			}
		}
		out(IP.top());
	}
	return 0;
}

