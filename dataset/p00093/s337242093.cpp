#include<iostream>
using namespace std;

int main(){
    int a,b,m=0;
    while(cin>>a>>b){
        if(!(a||b))break;
        if(m>0)cout<<endl;
        m++;
        
        int c=0;
        for(int i=a;i<=b;i++)
            if((i%4==0)&&(i%100!=0||i%400==0)){cout<<i<<endl;c++;}
        if(!c)cout<<"NA"<<endl;
    }
}