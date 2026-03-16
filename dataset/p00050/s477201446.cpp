#include<stdio.h>
#include<iostream>
#include<list>
#include<map>
#include<vector>
#include<algorithm>
#include<string.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) range(i,0,b)
#define debug(x) cout << x << endl;
using namespace std;

int main(){
    string s;
    int i;

    while(getline(cin, s)){
        i = 0;
        while(s[i + 4]){
            if(s.substr(i,5) == "apple"){
                s[i] = 'p';
                s[i+1] = 'e';
                s[i+2] = 'a';
                s[i+3] = 'c';
                s[i+4] = 'h';
            }else if(s.substr(i,5) == "peach"){
                s[i] = 'a';
                s[i+1] = 'p';
                s[i+2] = 'p';
                s[i+3] = 'l';
                s[i+4] = 'e';
            }
            i++;
        }
        cout << s << endl;
    }
}