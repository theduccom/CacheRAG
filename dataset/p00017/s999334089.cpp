#include<bits/stdc++.h>
using namespace std;

string str;

int main(){
    while(getline(cin,str)){
        for(int i=0;i<26;i++){
            if(str.find("the")!=string::npos)break;
            if(str.find("this")!=string::npos)break;
            if(str.find("that")!=string::npos)break;

            for(int j=0;j<str.size();j++){
                if(!isalpha(str[j]))continue;
                str[j]=(str[j]-'a'+1)%26+'a';
            }
        }
        cout<<str<<endl;
    }
    return 0;
}