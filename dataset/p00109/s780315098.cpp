#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <queue>
#include <numeric>
#include <ctime>
using namespace std;

int number(const string &s, int &k);
int expression(const string &s, int &k);
int term(const string &s, int &k);
int factor(const string &s, int &k);

// 式の評価.
int eval(const string &s){
    int k=0;
    int res = expression(s, k);
    /*if( k != s.size() ){
        // 構文規則が正しくない!!!!
    }*/
    return res;
}

bool is_digit(char c){
	return '0' <= c && c <= '9';
}

// <number> ::= <number> <digit> | <digit>
int number(const string &s, int &k){
    int res = 0;
    while( is_digit(s[k]) ){
        res = res * 10 + (s[k] - '0');
        ++k;
    }
    return res;
}

// <expression(式)> := <expression(式)> + <term(項)> | <term(項)> 
int expression(const string &s, int &k){
    int r1 = term(s, k);
     
    while( k < s.size() ){
        if( s[k] == '+' ){
            ++k;
            int r2 = term(s, k);
            r1 = r1 + r2;
        }else if( s[k] == '-' ){
            ++k;
            int r2 = term(s, k);
            r1 = r1 - r2;
        }else{
            break;
        }
    }
    return r1;
}

// <term(項)> := <term(項)> * <factor(因子)> | <factor(因子)>
int term(const string &s, int &k){
    int r1 = factor(s, k);
     
    while( k < s.size() ){
        if( s[k] == '*' ){
            ++k;
            int r2 = factor(s, k);
            r1 = r1 * r2;
        }else if( s[k] == '/' ){
            ++k;
            int r2 = factor(s, k);
            // 0 除算のエラー
            if( r2 == 0 ){
            	return -1;
            }
            r1 = r1 / r2;
        }else{
            break;
        }
    }
    return r1;
}

// <factor(因子)> := (<expression(式)>) | <Number>
int factor(const string &s, int &k){
    if( s[k] == '(' ){ // 括弧のはじまりのとき
        ++k; // '(' の 1つ先に進める.
        int r = expression(s, k);
        // ')' がないとき
        if( s[k] != ')' ) return -1;
         
        ++k; // ')' の 1つ先に進める.
        return r;
    }else if( is_digit(s[k]) ){ // 数字のとき
        return number(s, k);
    }else{ // 構文エラー
        return -1;
    }
}

int main(){
	int n;
	cin >> n;
	for(int i=0 ; i < n ; i++ ){
		string s;
		cin >> s;
		cout << eval(s) << endl;
	}
}