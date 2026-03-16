#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=(char)((int)str[i]-32);
        }
    }
    cout<<str<<endl;
    return 0;
}