#include<cstdio>
#include<cmath>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[5];
    while(scanf("%d",&a[0])!=EOF){
        for(int i=1;i<5;i++)scanf(",%d",&a[i]);
        sort(a,a+5);
        if(a[0]==a[3]||a[1]==a[4])cout<<"four card"<<endl;
        else if((a[0]==a[1]&&a[3]==a[4])&&(a[1]==a[2]||a[2]==a[3]))cout<<"full house"<<endl;
        else if(a[0]==1&&a[1]==10&&a[2]==11&&a[3]==12&&a[4]==13)cout<<"straight"<<endl;
        else if(a[0]+1==a[1]&&a[1]+1==a[2]&&a[2]+1==a[3]&&a[3]+1==a[4])cout<<"straight"<<endl;
        else if(a[0]==a[2]||a[1]==a[3]||a[2]==a[4])cout<<"three card"<<endl;
        else{
            int cou=0;
            for(int i=0;i<4;i++){
                if(a[i]==a[i+1])cou++;
            }
            if(cou==2)cout<<"two pair"<<endl;
            else if(cou)cout<<"one pair"<<endl;
            else cout<<"null"<<endl;
        }
    }
    return 0;
}