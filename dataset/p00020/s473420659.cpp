#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main ()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]>96&&str[i]<123){
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    return 0;
}