#include<bits/stdc++.h>
using namespace std;
int main()
{
    int high=0,low=0,n,number[8],kawa;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        for(int j=0;j<8;j++)number[j]=str[j]-'0';
        for(int j=0;j<8;j++){
            for(int k=7;k>j;k--){
                if(number[k]>number[k-1]){
                    kawa=number[k-1];
                    number[k-1]=number[k];
                    number[k]=kawa;
                }
            }
            high+=number[j]*pow(10,7-j);
            low+=number[j]*pow(10,j);
        }
        cout<<high-low<<endl;
        high=0;low=0;
    }
}