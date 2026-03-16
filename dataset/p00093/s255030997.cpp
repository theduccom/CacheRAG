#include<bits/stdc++.h>
using namespace std;
int main(void){
    int a,b,us,ue,loop=0;
    while(cin>>a>>b&&a!=0&&b!=0){
        if(loop!=0) cout<<endl;
        for(int i=0;i<8;i++){
            if(((a+i)%4==0&&(a+i)%100!=0)||(a+i)%400==0){
                us=a+i;
                break;
            }
        }
        for(int j=0;j<8;j++){
            if(((b-j)%4==0&&(b-j)%100!=0)||(b-j)%400==0){
                ue=b-j;
                break;
            }
        }
        if(us>ue) cout<<"NA"<<endl;
        else{
            for(int k=us;k<=ue;k+=4){
                if((k%4==0&&k%100!=0)||k%400==0){
                    cout<<k<<endl;
                } 
            }
        }
    loop++;    
    }
}