#include<iostream>
#include<string>
#include<vector>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
    int a[5];
    char c;
    while(cin>>a[0]>>c>>a[1]>>c>>a[2]>>c>>a[3]>>c>>a[4]){
        sort(a,a+5);
        int c[5],j=0;
        memset(c,0,sizeof(c));
        for(int i=0;i<4;i++){
            if(a[i+1]!=a[i])
                j++;
            if(a[i+1]==a[i]){
                c[j]++;
            }
        }
        int p=0,t=0,f=0;
        for(int i=0;i<5;i++){
            if(c[i]==1)p++;
            if(c[i]==2)t++;
            if(c[i]==3)f++;
        }
        if(p==2){
            cout<<"two pair"<<endl;
        }
        else if(p==1&&t==1)
            cout<<"full house"<<endl;
        else if(t==1)
            cout<<"three card"<<endl;
        else if(f==1)
            cout<<"four card"<<endl;
        else if(p==1){
            cout<<"one pair"<<endl;
        }
        else if((a[3]==a[4]-1)&&(a[1]==a[2]-1)&&(a[2]==a[3]-1)&&((a[0]==a[1]-1)||(a[4]==13&&a[0]==1)))
            cout<<"straight"<<endl;
        else cout<<"null"<<endl;
    }
}