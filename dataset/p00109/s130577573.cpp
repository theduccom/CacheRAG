#include <algorithm>
#include <bitset>
#include <cctype>
#include <complex>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

using namespace std;

inline int toInt(string s) {int v; istringstream sin(s);sin>>v;return v;}
template<class T> inline string toString(T x) {ostringstream sout;sout<<x;return sout.str();}
template<class T> inline T sqr(T x) {return x*x;}

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef long long ll;

#define all(a)  (a).begin(),(a).end()
#define rall(a) (a).rbegin(), (a).rend()
#define pb push_back
#define mp make_pair
#define each(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); ++i)
#define exist(s,e) ((s).find(e)!=(s).end())
#define range(i,a,b) for(int i=(a);i<(b);++i)
#define rep(i,n)  range(i,0,n)
#define clr(a,b) memset((a), (b) ,sizeof(a))
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

const double eps = 1e-10;
const double pi  = acos(-1.0);
const ll INF =1LL << 62;
const int inf =1 << 29;

string S;
size_t cur;


int digit();
int number();
int factor();
int term();
int expression();

int digit(){
	return S[cur++]-'0';
}

int number(){
	int res=digit();
	while(cur<S.size()&&isdigit(S[cur])){
		res*=10;
		res+=digit();
	}
	return res;
}
int factor() {
    if (S[cur] != '(') return number();
	cur++;
    int res=expression();
	cur++;
    return res;
}

int term(){
	int a=factor();
	while(S[cur]=='*'||S[cur]=='/'){
		char op=S[cur];
		cur++;
		int b=factor();
		switch(op){
			case '*':
				a*=b;
				break;
			case '/':
				a/=b;
				break;
		}
	}
	return a;
}

int expression(){
	int a=term();
	while(S[cur]=='+'||S[cur]=='-'){
		char op=S[cur];
		cur++;
		int b=term();
		switch(op){
			case '+':
				a+=b;
				break;
			case '-':
				a-=b;
				break;
		}
	}
	return a;
}

int main(void){
	int n;
	cin >> n;
	rep(i,n){
		cin >> S;
		cur=0;
		cout << expression() << endl;
	}
	return 0;
}