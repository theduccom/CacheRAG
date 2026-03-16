#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a;
    string str;
    int cou[4]={0};
    while(scanf("%d",&a)!=EOF){
        cin>>str;
        if(str.size()==3)cou[2]++;
        else if(str[1]=='A')cou[0]++;
        else if(str[1]=='O')cou[3]++;
        else if(str[1]=='B')cou[1]++;
    }
    for(int i=0;i<4;i++)cout<<cou[i]<<endl;
    return 0;
}