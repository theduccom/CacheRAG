#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n,a=0,b=0,o=0,ab=0;
    char g;
    string x;
    while(cin>>n>>g>>x){
        if(x=="A"){
            a++;
        }else if(x=="B"){
            b++;
        }else if(x=="O"){
            o++;
        }else if(x=="AB"){
            ab++;
        }
    }
    cout<<a<<endl<<b<<endl<<ab<<endl<<o<<endl;
    return 0;
}