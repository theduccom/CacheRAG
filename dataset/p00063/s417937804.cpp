#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){

    string str;
    int cnt=0;
    while(cin>>str){
        int S=str.length();
        bool flg=0;


        for(int i=0;i<=S-i-1;i++){
                //cout<<str[i]<<str[S-i-1]<<endl;
              if(str[i]!=str[S-i-1]){
                flg=1;
                break;
              }

        }
        if(flg==0)cnt++;

        str="";
    }
    cout<<cnt<<endl;


    return 0;
}