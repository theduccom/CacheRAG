#include<bits/stdc++.h>
using namespace std;

int main(){
    int a;

    while(cin>>a,a!=-1){
        int v=1150;
        if(a>10)v+=min(a-10,10)*125;
        if(a>20)v+=min(a-20,10)*140;
        if(a>30)v+=(a-30)*160;

        cout<<4280-v<<endl;
    }
    return 0;
}