#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int change(string s){
    int x = 0;
    int ten = 1;
    rep(i,8){
        x+= ten * (s[7-i] - '0');
        ten *= 10;
    }
    return x;
}

int main(){
    int n;
    string s;

    cin >> n;
    rep(i,n){
        cin >> s;
        sort(s.begin(), s.end(), greater<char>());
        int big = change(s);
        sort(s.begin(), s.end());
        int small = change(s);
        cout << big - small << endl;
    }
}