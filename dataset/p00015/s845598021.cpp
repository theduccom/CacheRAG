#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int ix=0;ix<n;ix++){
        string s1,s2;
        cin>>s1>>s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        if(s1.size()>80||s2.size()>80){
            printf("overflow\n");
            continue;
        }
        string res;
        int kuri=0;
        for(int i=0;i<80;i++){
            int now;
            if(i<s1.size()&&i<s2.size())now=(s1[i]-'0')+(s2[i]-'0')+kuri;
            else if(i<s1.size())now=(s1[i]-'0')+kuri;
            else if(i<s2.size())now=(s2[i]-'0')+kuri;
            else if(kuri==1)now=kuri;
            else break;
            res.append(1,(char)(now%10+'0'));
            kuri=now/10;
        }
        if(kuri==1)printf("overflow\n");
        else{
            reverse(res.begin(),res.end());
            printf("%s\n",res.c_str());
        }
    }
}