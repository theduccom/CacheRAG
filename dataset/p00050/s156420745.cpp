
#include <iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
int i=-1,j=0,mem;
    string str[1000]={""};
    char ch[1000];
    while(1){
        i++;
        scanf("%c",&ch[i]);
        if(ch[i]=='\n')break;
        if(ch[i]==' ')j++;
        else{
            if(ch[i]!=' '){
            str[j]+=ch[i];
            }
        }
    }
    for(int k=0;k<=j+1;k++){
        mem=str[k].find("apple");
        if(mem!=-1){
            str[k].replace(mem,5,"peach");
        }
        else{
            mem=str[k].find("peach");
            if(mem!=-1){
            str[k].replace(mem,5,"apple");            }
        }
    }
    for(int k=0;k<=j;k++){
        if(k==j)cout<<str[k]<<endl;
        else cout<<str[k]<<" ";
    }
            return 0;
}