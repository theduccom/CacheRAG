#include <iostream> // C++の入出力
#include <stdio.h> // C の入出力
#include <algorithm> // sort などのアルゴリズム
#include <string.h> // C の文字列用
#include <ctype.h> // C の文字種用
#include <string> // C++の文字列
#include <math.h>
#include <sstream>
using namespace std;
int main(void){
    string in;
    string out="";
    getline(cin,in);
    for(int s=0;s<in.length();s++){
        string moji;
        moji=in.substr(s,5);
        if(moji=="apple"){
            out+="peach";
            s+=4;
        }else if(moji=="peach"){
            out+="apple";
            s+=4;
        }else{
            out+=in[s];
        }
    }
    cout<<out<<endl;
    return 0;
}