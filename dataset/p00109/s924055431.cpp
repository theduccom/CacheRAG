#include <bits/stdc++.h>
using namespace std;
typedef string::const_iterator State;
class ParseError {};
 
int term(State &begin);
int expression(State &begin);
int factor(State &begin);
int number(State &begin);
void consume(State &begin, char expected);
 
// 四則演算の式をパースして、その評価結果を返す。
// <四則演算の式> ::= <乗算除算の式> (+ or -) <乗算除算の式> (+ or -) ...
// <expr>   ::= <term> [ ('+'|'-') <term> ]*
int expression(State &begin){
    int ret = term(begin);
    for(;;){
        if(*begin == '+'){
            begin++;
            ret += term(begin);
        }else if(*begin == '-'){
            begin++;
            ret -= term(begin);
        }else{
            break;
        }
    }
    return ret;
}
 
// 乗算除算の式をパースして、その評価結果を返す。
// <乗算除算の式> ::= <括弧か数> (* or /) <括弧か数> (* or /) ...
// <term>   ::= <factor> [ ('*'|'/') <factor> ]*
int term(State &begin){
    int ret = factor(begin);
    for(;;){
        if(*begin == '*'){
            begin++;
            ret *= factor(begin);
        }else if(*begin == '/'){
            begin++;
            ret /= factor(begin);
        }else{
            break;
        }
    }
    return ret;
}

// 括弧か数をパースして、その評価結果を返す。 
// <括弧か数> ::= '(' <四則演算の式> ')' or <数>
// <factor> ::= <number> | '(' <expr> ')'
int factor(State &begin){
    if(*begin == '('){
        begin++;
        int ret = expression(begin);
        begin++;
        return ret;
    }else{
        return number(begin);
    }
}
 
// 数字の列をパースして、その数を返す。
// <数> ::= ...
// <number> :== 1つ以上の数字
int number(State &begin){
    int ret = 0;
    while(isdigit(*begin)){
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }
    return ret;
}
 
int main(){
    int N;
    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++){
        string s;
        getline(cin, s);
        State begin = s.begin();
        int ans = expression(begin);
        cout << ans << endl;
    }
}
