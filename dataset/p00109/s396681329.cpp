#include <string>
#include <cctype>
#include <iostream>
using namespace std;

typedef string::const_iterator State;
class ParseError{};

typedef unsigned long long ull;
#define loop(i,a,b) for(int i = a ; i < b ; i ++)
#define rep(i,a) for(int i = 0 ; i < a ; i ++)
#define all(a) (a).begin() ,(a).end()

const double eps = 1e-10;
const double inf = (int)1e8;
 
int expression(State &begin);
int term(State &begin);
int number(State &begin);
int factor(State &begin);

int number(State &begin){
    int ret = 0;
    
    while(isdigit(*begin)){
        ret *= 10;
        ret += *begin - '0';
        begin ++;
    }
    return ret;
}

int term(State & begin){
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

int factor(State &begin){
    if(*begin == '('){
        begin++;
        int ret = expression(begin);
        begin++; 
        return ret;
    } else {
        return number(begin);
    }
}

int main(void){
    int n;
    string s;
    cin>>n;
    getline(cin,s);
    while(n--){
        getline(cin,s);
        State begin = s.begin();
        cout<<expression(begin)<<endl;
    }
    return 0;
}