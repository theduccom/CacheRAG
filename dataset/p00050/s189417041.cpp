#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int check[10000];
int main(){
    string S;
    getline(cin,S);
    int a=-1;
    while(S.find("apple",a+1)!=-1){
        a=S.find("apple",a+1);
        S.replace(a,5,"peach");
        check[a]=1;
    }
    a=-1;
    while(S.find("peach",a+1)!=-1){
        a=S.find("peach",a+1);
        if(!check[a])S.replace(a,5,"apple");
    }
    cout<<S<<endl;
    return 0;
}