#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
    int a,e=0,b=0,c=0,d=0;
    char h;
    string s;
    while(cin>>a>>h>>s){
        if(s=="A")e++;
        if(s=="B")b++;
        if(s=="AB")c++;
        if(s=="O")d++;
    }
    cout<<e<<endl<<b<<endl<<c<<endl<<d<<endl;
}