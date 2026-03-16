#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()

#define rep(i,n) for(int i=0; i<(n); i++)
#define repc(i,a,b) for(int i=(a); i<(b); i++)

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
const int IMAX=((1<<30)-1)*2+1;
const double EPS=1e-10;
//int mod=1000000007;

string s[3]={"HIT","HOMERUN","OUT"};


int main(){
	int n;
	cin>>n;
	rep(i,n){
		string t;
		int score=0,out=0;
		bool first=false,second=false,third=false;
		while(1){
			cin>>t;
			if(t==s[0]){
				if(third){
					score++;
					third=false;
				}
				if(second){
					third=true;
					second=false;
				}
				if(first){
					second=true;
				}
				first=true;
			}
			if(t==s[1]){
				score++;
				if(first){
					first=false;
					score++;
				}
				if(second){
					second=false;
					score++;
				}
				if(third){
					third=false;
					score++;
				}
			}
			if(t==s[2]){
				out++;
				if(out==3){
					cout<<score<<endl;
					break;
				}
			}
		}
	}
}