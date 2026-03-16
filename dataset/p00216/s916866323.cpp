#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int w;
    int latte[]={
        125,140,160,
    };
    while(cin>>w,w!=-1){
        int ans=1150;
        for(int i=0;i<3;i++){
            w-=10;
            if(w>0)ans+=min(10,w)*latte[i];
        }
        w-=10;
        ans+=max(0,w)*latte[2];
        cout<<4280-ans<<endl;

    }
    return 0;
}