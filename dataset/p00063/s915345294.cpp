#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main(){
    char word[150];
    int cnt=0;
    while(~scanf("%s",word)){
        int N=0,Long=strlen(word),L,i;
        //if(Long%2==1)N=1;
        L=Long-1;
        for(i=0;i<Long/2;i++){
            if(word[i]!=word[L])break;
            L--;
        }
        if(i==Long/2)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}