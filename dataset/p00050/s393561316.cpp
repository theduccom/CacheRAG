#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string s,a="peach",b="apple";
    getline(cin,s);
    for(int i=0,j;i<s.length();i++){
        for(j=0;j<5&&j+i<s.length();j++){
            if(s[i+j]!=a[j])
                break;
        }
        if(j==5){cout<<b;i+=4;}
        else{
            for(j=0;j<5&&j+i<s.length();j++){
                if(s[i+j]!=b[j])
                    break;
            }
            if(j==5){cout<<a;i+=4;}
            else cout<<s[i];
        }
    }
    cout<<endl;
}