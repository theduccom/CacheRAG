#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){
 
    int l[15];
    int i,a,b;
 
    while(scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d",&l[0],&l[1],&l[2],&l[3],&l[4],&l[5],&l[6],&l[7],&l[8],&l[9],&a,&b)!=EOF){
 
        double sum=0;
        for(i=0;i<10;i++){
            sum+=(double)l[i];
        }
 
    double c=0,d=0;
    for(i=0;i<10;i++){
        //c+=l[i];
        c+=l[i];
        d+=(double)l[i]/a*b;
        //cout<<"-"<<c<<"-"<<d<<endl;
        if(c+d>=sum)break;
    }
    cout<<i+1<<endl;
 
    }
    return 0;
}