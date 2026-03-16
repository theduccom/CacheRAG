#include<bits/stdc++.h>
using namespace std;

int main(){
    int b1,b2,b3;
    bool open=false;
    cin>>b1>>b2>>b3;

    if(b1==1 && b2==1 && b3==0){
        open=true;
    }else if(b1==0 && b2==0 && b3==1){
        open=true;
    }

    if(open==true){
        cout<<"Open"<<endl;
    }else{
        cout<<"Close"<<endl;
    }
    return 0;
}
