#include<bits/stdc++.h>
using namespace std;

bool is_uruu(int x){
    return x%400==0||(x%4==0&&x%100!=0);
}
int main(){
    int a,b;
    bool flag=false;
    while(cin>>a>>b,a||b){
        if(flag)cout<<endl;
        else flag=true;

        bool latte=false;
        for(int i=a;i<=b;i++){
            if(is_uruu(i)){
                latte=true;
                cout<<i<<endl;
            }
        }
        if(!latte)cout<<"NA"<<endl;

    }
    return 0;
}