#include<iostream>
using namespace std;
bool uruu(int n){
    bool f=false;
    if(n%4==0)f=true;
    if(n%100==0)f=false;
    if(n%400==0)f=true;
    return f;
}
int main(){
    int a,b;
    bool k=false;
    while(cin>>a>>b,a||b){
        bool f=true;
        if(k)cout<<endl;
        for(int i=a;i<=b;i++){
            if(uruu(i)){
                cout<<i<<endl;
                f=false;
            }
        }
        if(f)cout<<"NA"<<endl;
        k=true;
    }
    return 0;
}