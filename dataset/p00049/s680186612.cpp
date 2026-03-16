#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int a=0,b=0,o=0,ab=0;
    while(cin>>str){
        if((str[2]=='A'&&str[3]=='B')||(str[3]=='A'&&str[4]=='B')||(str[4]=='A'&&str[5]=='B'))ab++;
        else if(str[2]=='A'||str[3]=='A'||str[4]=='A')a++;
        else if(str[2]=='B'||str[3]=='B'||str[4]=='B')b++;
        else o++;
        //cout<<a<<endl<<b<<endl<<ab<<endl<<o<<endl;
    }
    cout<<a<<endl<<b<<endl<<ab<<endl<<o<<endl;
}