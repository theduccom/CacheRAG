#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int f,v=0;
    for(int i=2;i>=0;i--){
        cin>>f;
        v|=(f<<i);
    }
    if(v==6||v==1)cout<<"Open"<<endl;
    else cout<<"Close"<<endl;
}