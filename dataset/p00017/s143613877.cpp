#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>

using namespace std;

string decode(string inp,int n){
    string in=inp;
    for(int i=0;i<in.length();i++){
        if(isalpha(in[i])){
            in[i]=in[i]+n;
            if(in[i]>'z') in[i]='a'+(in[i]-'z'-1);
        }
    }
    return in;
}
bool check(string inp){
    stringstream words(inp);
    string word;
    while(getline(words, word, ' ')){
        if(word=="the"||word=="this"||word=="that"||word=="the."||word=="this."||word=="that.")
            return true;
    }
    return false;
}

int main(){
    string input;
    while(getline(cin,input)){
        for(int i=0;i<=26;i++){
            if(check(input)){
                break;
            }
            input=decode(input,1);
        }
        cout << input << endl;
    }
    return 0;
}