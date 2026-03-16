#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag=0;
    char apple[]="apple",peach[]="peach";
    string str;
    getline(cin,str);
    for(int i=0;str[i]!='\n';i++){
        if(str[i]=='a'){
            for(int j=i;j<i+5;j++){
                if(str[j]!=apple[j-i]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                for(int j=i;j<i+5;j++)str[j]=peach[j-i];
            }
            flag=0;
        }
        else if(str[i]=='p'){
            for(int j=i;j<i+5;j++){
                if(str[j]!=peach[j-i]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                for(int j=i;j<i+5;j++)str[j]=apple[j-i];
            }
                flag=0;
        }
    }
    cout<<str<<endl;
}