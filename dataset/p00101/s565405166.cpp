#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

const string src = "Hoshino";
bool check(string str,int n,int m){
    if(str[n]==src[m]){
        if(m==6) return true;
        return check(str,n+1,m+1);
    }
        return false;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string *str=new string[n];
    for(int i=0;i<n;i++){
        getline(cin,str[i]);
        for(int j=0;j<str[i].size();j++){
            if(check(str[i],j,0)){
                str[i][j+6]='a';
                j+=5;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << str[i] << endl;
    }
    return 0;
}