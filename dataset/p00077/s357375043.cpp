#include<iostream>
#include<string>
using namespace std;
int main(){
    string str,ans="";
    while(getline(cin,str)){
    for(int i=0;i<str.size();i++){
        if(str[i]=='@'){
            for(int j=0;j<str[i+1]-'0';j++){
                ans+=str[i+2];
            }
            i+=2;
        }
        else{
            ans+=str[i];
        }
    }
    cout<<ans<<endl;
        ans="";
    }
    return 0;
}