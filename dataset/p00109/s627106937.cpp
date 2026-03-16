#include <iostream>
#include <string>
#include <cctype>

using namespace std;

struct Result {
        int value, p;
};

#define PARSER_DECL(name) \
        Result name (const string &s, int p)

PARSER_DECL(expr);
PARSER_DECL(term);
PARSER_DECL(factor);
PARSER_DECL(number);

PARSER_DECL(expr){
        Result r = term(s, p);
        while(s[r.p] == '+' || s[r.p] == '-'){
                Result q = term(s, r.p + 1);
                if(s[r.p] == '+'){
                        r.value += q.value;
                        r.p = q.p;
                }else if(s[r.p] == '-'){
                        r.value -= q.value;
                        r.p = q.p;
                }
        }
        return r;
}

PARSER_DECL(term){
        Result r = factor(s, p);
        while(s[r.p] == '*' || s[r.p] == '/'){
                Result q = factor(s, r.p + 1);
                if(s[r.p] == '*'){
                        r.value *= q.value;
                        r.p = q.p;
                }else if(s[r.p] == '/'){
                        r.value /= q.value;
                        r.p = q.p;
                }
        }
        return r;
}

PARSER_DECL(factor){
        Result r;
        if(s[p] == '('){
                r = expr(s, p + 1);
                ++r.p;
        }else{
                r = number(s, p);
        }
        return r;
}

PARSER_DECL(number){
        Result r;
        r.value = 0;
        r.p = p;
        while(isdigit(s[r.p])){
                r.value = (r.value * 10) + (s[r.p] - '0');
                ++r.p;
        }
        return r;
}

int main(){
        int n;
        cin >> n;
        while(n--){
                string s;
                cin >> s;
                s.resize(s.size() - 1);
                cout << expr(s, 0).value << endl;
        }
        return 0;
}