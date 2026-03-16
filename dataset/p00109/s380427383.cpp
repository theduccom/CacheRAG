#include <bits/stdc++.h>

using namespace std;

string::const_iterator it;

int number();
int factor();
int term();
int expression();

int number()
{
    int ret = 0;
    
    while(isdigit(*it)) {
        ret *= 10;
        ret += *it - '0';
        it++;
    }
    
    return ret;
}

int factor()
{
    int ret;

    if (*it == '(') {
        it++;
        ret = expression();
        it++;
    } else {
        return number();
    }
    
    return ret;
}

int term()
{
    int ret = factor();
    
    for (;;) {
        
        if (*it == '*') {
            it++;
            ret *= factor();
        } else if (*it == '/') {
            it++;
            ret /= factor();
        } else {
            break;
        }
    }
    
    return ret;
}

int expression()
{
    int ret = term();
    
    for (;;) {
        
        if (*it == '+') {
            it++;
            ret += term();
        } else if (*it == '-') {
            it++;
            ret -= term();
        } else {
            break;
        }
    }
    
    return ret;
}

int main()
{
    int data_num;

    cin >> data_num;
    cin.ignore();
    
    for (int i = 0; i < data_num; ++i) {
        string calc_formula;

        cin >> calc_formula;

        it = calc_formula.begin();

        cout << expression() << endl;
    }

    return 0;
}