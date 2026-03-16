#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

typedef string::iterator si;

int expr(si& cur, si end);

int num(si& cur, si end){
    int ans = 0;
    while(cur != end && isdigit(*cur)){
        ans *= 10;
        ans += *cur-'0';
        cur++;
    }
    return ans;
}

int fact(si& cur, si end){
    int ans = 1;
    if(*cur == '('){
        cur++;
        ans *= expr(cur, end);
        cur++;
    } else {
        ans *= num(cur, end);
    }
    return ans;
}

int term(si& cur, si end){
    int ans = 1;
    char op = '*';
    while(1){
        int f = fact(cur,end);

        if(op == '*') ans *= f;
        else ans /= f;
        if(cur == end || *cur == ')' ||  (*cur != '*' && *cur != '/')) break;
        else op = *cur;
        cur++;
    }
    return ans;
}

int expr(si& cur, si end){
    int ans = 0;
    char op = '+';
    while(1){
        int t = term(cur, end);

        if(op == '+') ans += t;
        else ans -= t;

        if(cur == end || *cur == ')') break;
        else op = *cur;
        cur++;
    }
    return ans;
}




int main(){
    int n; cin>>n;
    while(n--){
        string s; cin>> s;
        si b = s.begin();
        cout << expr(b, s.end()-1) << endl;
    }
}