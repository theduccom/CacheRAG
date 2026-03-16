#include <bits/stdc++.h>
using namespace std;

#define rep(i,x,y) for(int i=(x);i<(y);++i)
#define debug(x) #x << "=" << (x)
 
#ifdef DEBUG
#define _GLIBCXX_DEBUG
#define dump(x) std::cerr << debug(x) << " (L:" << __LINE__ << ")" << std::endl
#else
#define dump(x)
#endif

typedef long long int ll;
typedef pair<int,int> pii;
//template<typename T> using vec=std::vector<T>;

const int inf=1<<30;
const long long int infll=1LL<<58;
const double EPS=1e-9;
const int dx[]={1,0,-1,0},dy[]={0,1,0,-1};

namespace parser{

typedef string::const_iterator state;
class parse_error{};

int number(state&);
int factor(state&);
int term(state&);
int expression(state&);

// 数字の列をパースして、その数を返す。
int number(state &begin){
    int res=0;
    while(isdigit(*begin)){
        res*=10;
        res+=*begin-'0';
        ++begin;
    }
    return res;
}

// 括弧か数をパースして、その評価結果を返す。
int factor(state &begin){
    if(*begin=='('){
        ++begin;
        int res=parser::expression(begin);
        ++begin;
        return res;
    }else return parser::number(begin);
}

// 乗算除算の式をパースして、その評価結果を返す。
int term(state &begin){
    int res=parser::factor(begin);
    while(true){
        if(*begin=='*'){
            ++begin;
            res*=parser::factor(begin);
        }else if(*begin=='/'){
            ++begin;
            res/=parser::factor(begin);
        }else break;
    }
    return res;
}

// 四則演算の式をパースして、その評価結果を返す。
int expression(state &begin){
    int res=parser::term(begin);
    while(true){
        if(*begin=='+'){
            ++begin;
            res+=parser::term(begin);
        }else if(*begin=='-'){
            ++begin;
            res-=parser::term(begin);
        }else break;
    }
    return res;
}
}

void solve(){
    int n;
    cin >> n;
    cin.ignore();
    rep(i,0,n){
        string s;
        getline(cin,s);
        
        parser::state begin=s.begin();
        int ans=parser::expression(begin);
        cout << ans << endl;
    }
}

int main(){
	std::ios::sync_with_stdio(false);
	std::cin.tie(0);
	solve();
	return 0;
}