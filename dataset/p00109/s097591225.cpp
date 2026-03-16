#include<bits/stdc++.h>

// Shrotening
#define fst first
#define snd second
#define pb push_back

// Loop
#define FOR(i,a,b) for(long i=(a);i<(b);++i)
#define RFOR(i,a,b) for(long i=(a);i>=(b);--i)

#define REP(i,a) for(long i=0;i<(a);++i)
#define RREP(i,a) for(long i=(a);i>=0;--i)

#define EACH(i,a) for(auto (i)=(a).begin(),_END=(a).end();i!=_END;++i)
#define REACH(i,a) for(auto (i)=(a).rbegin(),_END=(a).rend();i!=_END;++i)

//Algorithm
#define ALL(a) (a).begin(), a.end()
#define RALL(a) (a).rbegin(), a.rend()
#define EXIST(a,x) ((a).find(x)!=(a).end())
#define SORT(a) std::sort((a).begin(), (a).end())
#define UNIQUE(a) std::sort((a).begin(), a.end()), a.erase(std::unique((a).begin(), a.end()), a.end());
#define SUM(a) std::accumulate((a).begin(), (a).end(), 0);

//Setting
#define OPT std::cin.tie(0);std::ios::sync_with_stdio(false);

//debug message
bool debug = true;
#define MSG(s)   if(debug){std::cout << s << std::endl;}
#define DEBUG(x) if(debug){std::cout << "debug(" << #x << "): " << x << std::endl;}

//alias
typedef long long LL;
typedef std::vector<char> VC;
typedef std::vector<int>  VI;
typedef std::vector<long> VL;
typedef std::vector<long long> VLL;

typedef std::vector< VC > VC2;
typedef std::vector< VI > VI2;
typedef std::vector< VL > VL2;
typedef std::vector< VLL > VLL2;

typedef std::pair<int,int> PII;

/*
    Expr = Term {'+'|'-' Term}*
    Term = Fact {'*'|'/' Fact}*
    Fact = Number | '(' Expr ')'
*/

int Fact(int*, std::string);
int Term(int*, std::string);
int Expr(int*, std::string);

int Fact(int* pos, std::string s) {
    int res = 0;
    if(s[*pos] == '(') {
        *pos += 1;
        res = Expr(pos, s);
        *pos += 1;
    } else {
        while(*pos < s.length() && s[*pos] >= '0' && s[*pos] <= '9') {
            res *= 10;
            res += (int)(s[*pos] - '0');
            *pos += 1;
        }
    }
    return res;
}

int Term(int* pos, std::string s) {
    int fact = Fact(pos, s);
    if(*pos >= s.length()) return fact;
    while( *pos < s.length() && (s[*pos] == '*' || s[*pos] == '/') ) {
        char op = s[*pos];
        *pos += 1;

        int nfact = Fact(pos, s);
        if(op == '*') {
            fact *= nfact;
        } else {
            fact /= nfact;
        }
    }
    return fact;
}

int Expr(int* pos, std::string s) {
    int term = Term(pos, s);
    if(*pos >= s.length()) return term;
    while( *pos < s.length() && (s[*pos] == '+' || s[*pos] == '-') ) {
        char op = s[*pos];
        *pos += 1;

        int nterm = Term(pos, s);
        if(op == '+') {
            term += nterm;
        } else {
            term -= nterm;
        }
    }
    return term;
}

int main() {
    int N;
    std::string str;
    std::cin >> N;
    REP(i, N) {
        int pos = 0;
        std::cin >> str;
        std::cout << Expr(&pos, str) << std::endl;
    }
}