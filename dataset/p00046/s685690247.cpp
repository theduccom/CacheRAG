#include<iostream>
using namespace std;

int main(){
    double a,b,c;
    while(cin>>c){
        a=max(a,c);
        b=min(b,c);
    }
    cout<<a-b<<endl;
}