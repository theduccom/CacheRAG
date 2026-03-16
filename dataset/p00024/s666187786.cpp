#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    double t,v,y,ans,c;
    while(cin>>v){
        t=v/9.8;
        y=t*t*4.9;
        for(int i=0;;i++){
            c=5*i-5;
            if(y<c){
                t=i;
                break;
        }
        }
        cout<<t<<endl;
    }
return 0;
}