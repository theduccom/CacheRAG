#include <iostream>
using namespace std;
int main(void){
    int a[100];
    for(int i=0;i<=2;i++){
    cin>>a[i];
    }
    if(a[0]==1){
        if(a[1]==0){cout<<"Close"<<endl;}
        else {cout<<"Open"<<endl;}
    }
    else if(a[0]==0){
        if(a[1]==1){cout<<"Close"<<endl;}
        else{
            if(a[2]==1){cout<<"Open"<<endl;}
            else {cout<<"Close"<<endl;}
        }
    }
}
