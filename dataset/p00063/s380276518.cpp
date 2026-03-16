#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int c=0;
    while(cin>>str){
        int s=1;
        for(int i=0;i<str.length();i++)
            if(str[i]!=str[str.length()-1-i])
                s=0;
        if(s)c++;
    }
    cout<<c<<endl;
}