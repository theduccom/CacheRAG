#include <bits/stdc++.h>
using namespace std;

#define State string::const_iterator
class ParseError {};

int expression(State &begin);
int term(State &begin);
int number(State &begin);
int factor(State &begin);

// 四則演算の式をパースして、その評価結果を返す。
int expression(State &begin) {
    int ret = term(begin);

    while(true){
        if(*begin == '+'){
            begin++;
            ret += term(begin);
        }
        else if(*begin == '-'){
            begin++;
            ret -= term(begin);
        }
        else{
            break;
        }
    }

    return ret;

}

// 乗算除算の式をパースして、その評価結果を返す。
int term(State &begin) {
    int ret = factor(begin);

    while(true){
        if(*begin == '*'){
            begin++;
            ret *= factor(begin);
        }
        else if(*begin == '/'){
            begin++;
            ret /= factor(begin);
        }
        else{
            break;
        }
    }

    return ret;
}

// 数字の列をパースして、その数を返す。
int number(State &begin) {
    int ret = 0;

    while(isdigit(*begin)){
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }

    return ret;
}

// 括弧か数をパースして、その評価結果を返す。
int factor(State &begin) {
    if (*begin == '(') {
        begin++; // '('を飛ばす。
        int ret = expression(begin);
        begin++; // ')'を飛ばす。
        return ret;
    } else {
        return number(begin);
    }
}

int main() {

    int n;

    cin >> n;

    while(n--){

        string input;

        cin >> input;

        State s = input.begin();

        cout << expression(s) << endl;

    }

    return 0;
}
