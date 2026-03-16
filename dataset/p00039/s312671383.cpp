#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main(){
    string str;
    map<char,int> M;
    M['I']=1;M['V']=5;M['X']=10;M['L']=50;M['C']=100;M['D']=500;M['M']=1000;
    while(cin>>str){
        int ans=0;
        for(int i=0;i<str.size();i++){
            if(str.size()==i-1)ans+=M[str[i]];
            else if(M[str[i]]<M[str[i+1]])ans-=M[str[i]];
            else ans+=M[str[i]];
        }
        cout<<ans<<endl;
    }
}