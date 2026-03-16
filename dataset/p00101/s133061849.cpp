#include <iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    int n,fi,fi1;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i==0){
        getline(cin,str);
        }
        getline(cin,str);
        while(1){
        fi=str.find("Hoshino");
            if(fi==-1){
                break;
            }
        str.replace(fi,7,"Hoshina");
        }
        cout<<str<<endl;
    }
    return 0;
}