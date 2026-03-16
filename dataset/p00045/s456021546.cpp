#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sumso=0,sumnum=0,co=0,strs=0,ko=0;
    double sob[2]={0,0},n;
    string str;
    while(cin>>str){
        n=str.size();
        for(int i=0;i<=n;i++){
            if(str[i]==','||str[i]=='\0'){
                for(int j=strs;j<i;j++)sob[co]+=(str[j]-'0')*pow(10,i-j-1);
                co++;
                strs=i+1;
            }
        }
    sumso+=sob[0]*sob[1];
    sumnum+=sob[1];
    ko++;
    for(int i=0;i<2;i++)sob[i]=0;
    co=0;strs=0;
    }
    if(sumnum&ko!=0)co=1;
    cout<<sumso<<endl<<sumnum/ko+co<<endl;
}