#include<bits/stdc++.h>
using namespace std;
int serch(char str)
{
    if(str=='I')return 1;
    else if(str=='V')return 5;
    else if(str=='X')return 10;
    else if(str=='L')return 50;
    else if(str=='C')return 100;
    else if(str=='D')return 500;
    else return 1000;
}
int main()
{
    int fron=0,bac=0,sum=0;
    string str;
    while(cin>>str){
        for(int i=0;str[i]!='\0';i++){
            bac=serch(str[i]);
            if(fron>=bac)sum+=bac;
            else sum+=bac-fron*2;
            fron=bac;
            bac=0;
        }
        cout<<sum<<endl;
        sum=0;fron=0;
    }
}