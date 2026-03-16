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
    int i, j;

    while( getline(cin, s) ){
        while(s.find("the") == s.npos && s.find("this") == s.npos && s.find("that") == s.npos){
            for(i = 0; s[i]; i++){
                if(s[i] >= 'a' && s[i] <= 'z')
                    s[i]++;
                if(s[i] == 'z' + 1){
                    s[i] = 'a';
                }
            }
        }
        cout << s << endl;
    }
}