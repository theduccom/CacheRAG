#include <iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    bool a=true,b=false,c=false;
    string str;
    while(cin>>str){
        if(str=="A,B"||str=="B,A"){
            swap(a,b);
        }
        else if(str=="B,C" || str=="C,B"){
            swap(b,c);
        }
        else if(str=="A,C" || str=="C,A"){
            swap(a,c);
        }
    }
    if(a){
        cout<<"A"<<endl;
    }
    else if(b){
        cout<<"B"<<endl;
    }
    else{
        cout<<"C"<<endl;
    }
    return 0;
}