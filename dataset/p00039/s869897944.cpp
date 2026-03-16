#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int check(char x){
    if(x=='M')return 1000;
    else if(x=='D')return 500;
    else if(x=='C')return 100;
    else if(x=='L')return 50;
    else if(x=='X')return 10;
    else if(x=='V')return 5;
    else if(x=='I')return 1;
    else return 0;
}
int main(void){
 
    char str[100]={0};
 
    while(cin>>str){
    int ans=0;
        for(int i=0;sizeof(str);i++){
            if(check(str[i])<check(str[i+1]))ans+=(check(str[i+1])-check(str[i])),i++;
            else if(str[i]==0)break;
            else ans+=check(str[i]);
 
        }
 
        cout<<ans<<endl;
 
        for(int i=0;i<sizeof(str);i++){
            str[i]=0;
        }
    }
    return 0;
}