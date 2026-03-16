#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main(){
    int bunndo[10]={1,2,4,8,16,32,64,128,256,512},n,cnt=0;
    while(cin>>n){
        bool num[10]={0};
        for(int i=9;i>=0;i--){
            if(n-bunndo[i]>=0){
                n=n-bunndo[i];
                num[i]=1;
                if(n==0)break;
            }
        }
        for(int i=0;i<10;i++){
            if(num[i]==1){
                if(cnt==0){
                    cnt=1;
                    cout<<bunndo[i];
                }else{
                    cout<<" "<<bunndo[i];
                }
            }
        }
        cnt=0;
        cout<<endl;
    }
    return 0;
}