#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i=0;
    while(i<(int)(s.size())-4){
        if(s.substr(i,5)=="apple"){
            s.replace(i,5,"peach");
            i+=5;
        }else if(s.substr(i,5)=="peach"){
            s.replace(i,5,"apple");
            i+=5;
        }else i++;
    }
    cout<<s<<endl;
}