#include<iostream>
#include <string>
#include <cctype>

using namespace std;

typedef string::const_iterator State;
class ParseError {};

int expression(State& base);
int number(State& base){
    int ret=0;
    while(isdigit(*base)){
        ret=ret*10+(*base-'0');
        base++;
    }
    return ret;
}
int factor(State& base){
    int ret;
    if(*base=='('){
        base++;
        ret=expression(base);
        base++;
        return ret;
    }
    else
        return number(base);
}
int term(State& base){
    int ret=factor(base);
    while(1){
        if(*base=='*'){
            base++;
            ret*=factor(base);
        }
        else if(*base=='/'){
            base++;
            ret/=factor(base);
        }
        else break;
    }
    return ret;
}
int expression(State& base){
    int ret=term(base);
    while(1){
        if(*base=='+'){
            base++;
            ret+=term(base);
        }
        else if(*base=='-'){
            base++;
            ret-=term(base);
        }
        else break;
    }
    return ret;
}
int main(){
    int n;
    cin>>n;
    while(n--){
        string str;
        cin>>str;
        State base = str.begin();
        cout<<expression(base)<<endl;
    }
}