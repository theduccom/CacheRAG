#include <bits/stdc++.h>
using namespace std;

using State = string::const_iterator;

using ll = long long int;

int expr(State &begin);
int term(State &begin);
int num(State &begin);
int factor(State &begin);

void consume(State &begin, char expected){
    if(*begin == expected){
        begin++;
    }else{
        cerr << "Expected " << expected << " but " << *begin << endl;
        throw "";
    }
}

int expr(State &begin){
    int res = term(begin);
    while(1){
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

int term(State &begin){
    int res = factor(begin);
    while(1){
        if(*begin == '*'){
            begin++;
            res *= factor(begin);
        }else if(*begin == '/'){
            begin++;
            res /= factor(begin);
        }else{
            break;
        }
    }
    return res;
}

int num(State &begin){
    int res = 0;
    while(isdigit(*begin)){
        res = res*10 + *begin-'0';
        begin++;
    }
    return res;
}

int factor(State &begin){
    int res = 0;
    if(*begin == '('){
        begin++;
        res = expr(begin);
        consume(begin,')');  // ')'
    }else{
        res = num(begin);
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        State begin = s.begin();
        int ans = expr(begin);
        cout << ans << endl;
    }
    return 0;
}

