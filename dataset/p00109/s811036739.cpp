#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <cstring>
#include <utility>
#include <numeric>
#include <cctype>

using namespace std;

using State = string::const_iterator;

int number(State &begin);
int expression(State &begin);
int term(State &begin);
int factor(State &begin);

int number(State &begin){
    int ret = 0;
    while(isdigit(*begin)){
        ret *= 10;
        ret += *begin - '0';
        begin++;
    }

    return ret;
}

int factor(State &begin){
    if(*begin == '('){
        begin++;
        int ret = expression(begin);
        begin++;
        return ret;
    }
    else{
        return number(begin);
    }
}

int expression(State &begin){
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

int term(State &begin){
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

int main(){

    int N;
    cin >> N;
    string s;
    for(int i = 0; i < N; i++){
        cin >> s;
        State begin = s.begin();
        cout << expression(begin) << endl;
    }

    return 0;
}
