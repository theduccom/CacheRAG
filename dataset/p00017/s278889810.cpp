#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>

using namespace std;


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
        for(int i=0;i<26;i++){
            for(int j=0;j<input.length();j++){
                if(isalpha(input[j])){
                    input[j]++;
                    if(input[j]>'z') input[j]='a';
                }
            }
            if(check(input)){
                break;
            }
        }
        cout << input << endl;
    }
    return 0;
}