#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string str;
    int ma,co=0;
    while(cin>>str){
        for(int i=0;;i++){
            if(str[i]=='\0'){
               ma=i;
               break;
            }
        }
        if(ma==1)co++;
        for(int i=0;i<ma/2;i++){
            if(str[i]!=str[ma-(i+1)])break;
            if(i==ma/2-1)co++;
        }
       // cout<<co<<endl;
    }
    cout<<co<<endl;
}