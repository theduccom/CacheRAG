#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
signed main(){
        char s[100];
        while( fgets(s, 100, stdin) != NULL ){
                for(int i=0;i<26;i++){
                        for(int j=0;j<100;j++){
                                if(s[j]=='a') s[j] = 'z';
                                else if('a'<s[j]&&s[j]<='z') s[j]-=1;
                        }
                        if(strstr(s,"the")!=NULL ||
                                        strstr(s,"this")!=NULL ||
                                        strstr(s,"that")!=NULL){
                                printf("%s",s);
                                break;
                        }
                }
        }
        return 0;
}