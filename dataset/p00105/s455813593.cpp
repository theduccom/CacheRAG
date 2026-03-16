#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sen=0,num,page[1000][100]={},nu[1000]={};
    memset(nu,0,sizeof(nu));
    string str[1000],s;
    while(cin>>s>>num){
        for(int i=0;i<sen;i++){
            if(str[i]==s){
                nu[i]++;
                page[i][nu[i]]=num;
                num=0;
                break;
            }
        }
        if(num!=0){
            str[sen]=s;
            page[sen][0]=num;
            sen++;
        }
    }
    for(int i=0;i<sen;i++){
        for(int j=0;j<sen;j++)if(str[num]>str[j])num=j;
        cout<<str[num]<<endl;
        str[num]=123;
        for(int j=0;j<nu[num];j++){
            for(int k=nu[num];k>j;k--){
                if(page[num][k]<page[num][k-1]){
                    int kawa=page[num][k-1];
                    page[num][k-1]=page[num][k];
                    page[num][k]=kawa;
                }
            }
        }
        cout<<page[num][0];
        for(int j=1;j<=nu[num];j++)cout<<" "<<page[num][j];
        cout<<endl;
    }
}