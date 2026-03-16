#include<bits/stdc++.h>
using namespace std;
typedef string::const_iterator State;
class ParseError{};

int expr(State& begin);
int term(State& begin);
int number(State& begin);
int fact(State& begin);

int number(State& begin){
    int res = 0;
    while(isdigit(*begin)){
        res *= 10;
        res += *begin - '0';
        begin++;
    }
    return res;
}

int term(State& begin){
    int res = fact(begin);
    while(true){
        if(*begin == '*'){
            begin++;
            res *= fact(begin);
        }else if(*begin == '/'){
            begin++;
            res /= fact(begin);
        }else{
            break;
        }
    }
    return res;
}

int expr(State& begin){
    int res = term(begin);
    while(true){
        if(*begin == '+'){
            begin++;
            res += term(begin);
        }else if(*begin == '-'){
            begin++;
            res -= term(begin);
        }else{
            break;
        }
    }
    return res;
}

int fact(State& begin){
    if(*begin == '('){
        begin++;
        int res = expr(begin);
        begin++;
        return res;
    }
    return number(begin);
}

int main(){
    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        string s;
        cin >> s;
        s = s.substr(0,s.size()-1);
        State begin = s.begin();
        cout << expr(begin) << endl;
    }
}
