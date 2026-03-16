#include <iostream>
#include <cctype>
using namespace std;

typedef string::const_iterator State;

int number(State& begin);
int term(State& begin);
int expr(State& begin);
int factor(State& begin);

int number(State& begin){
    int res = 0;
    while( isdigit(*begin) ){
        res *= 10;
        res += *begin - '0';
        begin++;
    }
    return res;
}

int term(State& begin){
    int res = factor(begin);
    for(;;){
        if( *begin == '*' ){
            begin++;
            res *= factor(begin);
        }else if( *begin == '/' ){
            begin++;
            res /= factor(begin);
        }else{
            break;
        }
    }
    return res;
}

int expr(State& begin){
    int res = term(begin);
    for(;;){
        if( *begin == '+' ){
            begin++;
            res += term(begin);
        }else if( *begin == '-' ){
            begin++;
            res -= term(begin);
        }else{
            break;
        }
    }
    return res;
}

int factor(State& begin){
    if(*begin == '('){
        begin++;
        int res = expr(begin);
        begin++;
        return res;
    }else{
        return number(begin);
    }
}

int main(void){
    int N;
    cin >> N;
    cin.ignore();
    for(string s;N--;){
        getline(cin, s);
        State begin = s.begin();
        cout << expr(begin) << endl;
    }
    return 0;
}