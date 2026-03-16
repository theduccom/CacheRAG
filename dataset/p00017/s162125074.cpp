#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[53]="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
int main(){
    char str[81];
    while(cin>>str[0]){
        for(int i=1;i<81;i++)str[i]=0;
        for(int i=1;i<80;i++){
            str[i]=getchar();
            if(str[i]==10){
                str[i]=0;
                break;
            }
        }
        int len=strlen(str);

        for(int i=0;i<26;i++){
            char cpy[81];
            strncpy(cpy,str,81);

            for(int j=0;j<len;j++){
                if(str[j]==' ' || str[j]=='.' || str[j]==10)continue;
                cpy[j]=a[cpy[j]-'a'+i];
            }
            bool f=false;
            for(int j=0;j<len-2;j++){
                if(!strncmp(cpy+j,"the",3))f=true;
                if(!strncmp(cpy+j,"this",4))f=true;
                if(!strncmp(cpy+j,"that",4))f=true;
            }
            if(f){
                cout<<cpy<<endl;
                break;
            }
        }
    }
    return 0;


}