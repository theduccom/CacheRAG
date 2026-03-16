#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef tuple<int, int> duo;
typedef string::const_iterator state;

const int dx[] = {0, 0, 1, -1, 1, 1, -1, -1};
const int dy[] = {1, -1, 0, 0, 1, -1, 1, -1};
const int Mod = 1000000000 + 0;
//{{{ templates
#define TT_ template<typename T>inline
#define TTF_ template<typename T,typename F>inline
TT_ T sq(T x){return x*x;}
TT_ T In(){T x;cin>>x;return x;}
TT_ void Out(T&x){cout<<x;}
TT_ void sort(T&v){sort(begin(v),end(v));}
TT_ void revs(T&v){reverse(begin(v),end(v));}
TT_ void uniq(T&v){sort(v);v.erase(unique(begin(v),end(v)),end(v));}
TT_ int ubnd(T&v,typename T::value_type&x){return upper_bound(begin(v),end(v),x)-begin(v);}
TT_ int lbnd(T&v,typename T::value_type&x){return lower_bound(begin(v),end(v),x)-begin(v);}
TTF_ void inpt(T&v,int n,F f){for(v.reserve(n);n--;v.emplace_back(f()));}
TTF_ void show(T&v,F f,string d=" ",string e="\n"){int i=0;for(auto&x:v)i++&&(cout<<d),f(x);cout<<e;}
TT_ typename T::iterator minel(T&v){return min_element(begin(v),end(v));}
TT_ typename T::iterator maxel(T&v){return max_element(begin(v),end(v));}

inline void fast_io(){ios::sync_with_stdio(0);cin.tie(0);}
inline int in(){int x;scanf("%d",&x);return x;}
inline ll pow_mod(ll a,ll k,ll m){ll r=1;for(;k>0;a=a*a%m,k>>=1)if(k&1)r=r*a%m;return r;}
inline ll mod_inv(ll a,ll p){return pow_mod(a,p-2,p);}
//}}} priority_queue queue deque front stringstream max_element min_element insert count make_tuple

template<typename T, bool Check=false>
struct LexParser {
  typedef T expr_t;
  typedef string::const_iterator state_t;
  LexParser(){}
  expr_t eval(const string& expr){
    auto s = begin(expr);
    auto r = expression(s);
    consume(s, '=');
    return r;
  }
  void consume(state_t& s, char expected){
    if (!Check || *s == expected){
      s++;
      return;
    }
    cerr << "Expected '" << expected << "' but got '" << *s << "'" << endl;
    cerr << "Rest string is '";
    while (*s) cerr << *s;
    cerr << "'" << endl;
  }
  expr_t number(state_t& s){
    expr_t r = 0;
    while (isdigit(*s)){
      r = r * 10 + (*s - '0');
      s++;
    }
    return r;
  }
  expr_t term(state_t& s){
    expr_t r = factor(s);
    while (1){
      if (*s == '*'){
        consume(s, '*');
        r *= factor(s);
      }
      else if (*s == '/'){
        consume(s, '/');
        r /= factor(s);
      }
      else break;
    }
    return r;
  }
  expr_t factor(state_t& s){
    expr_t r;
    if (*s == '('){
      consume(s, '(');
      r = expression(s);
      consume(s, ')');
    }
    else r = number(s);
    return r;
  }
  expr_t expression(state_t& s){
    expr_t r = term(s);
    while (1){
      if (*s == '+'){
        consume(s, '+');
        r += term(s);
      }
      else if (*s == '-'){
        consume(s, '-');
        r -= term(s);
      }
      else break;
    }
    return r;
  }
};

int main()
{
  LexParser<int> parser;
  for (int n = in(); n--;){
    string expr;
    cin >> expr;
    cout << parser.eval(expr) << endl;
  }
  return 0;
}