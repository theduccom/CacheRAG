#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    while(cin>>str){
        for(int i=0;i<str.length();i++){
            if(str[i]=='@'){
                int c=str[i+1]-'0';
                while(c--)cout<<str[i+2];
                i+=2;
                continue;
            }
            cout<<str[i];
        }
        cout<<endl;
    }
}