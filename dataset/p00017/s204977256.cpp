#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

int N;
const int M = 26;
string S;
vector<string> words{"the","this","that"};

int main()
{
	while(getline(cin,S),S != ""){
		N = S.size();
		FOR(i,0,M){
			bool ok = false;
			FOR(j,0,words.size()){
				ok |= S.find(words [j]) != string::npos;
			}
			if(ok){
				cout << S << endl;
				break;
			}
			FOR(j,0,N) if(S [j] >= 'a' && S [j] <= 'z'){
				S [j] = (S [j] + 1 - 'a') % M + 'a';
			}
		}
	}

	return 0;
}