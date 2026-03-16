#include<bits/stdc++.h>
using namespace std;


int main(){
    char str[128];

    while(scanf("%s",str)!=EOF){
        int cur=0,n=strlen(str);
        while(cur<n){
            if(str[cur]!='@')printf("%c",str[cur]);
            else{
                int t=str[++cur]-'0';
                char c=str[++cur];
                for(int i=0;i<t;i++)printf("%c",c);
            }
            cur++;
        }
        puts("");
    }
    return 0;
}