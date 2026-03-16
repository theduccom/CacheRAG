#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(void){
 
    int a[5]={0};
    string str="null";
    while(scanf("%d,%d,%d,%d,%d",&a[0],&a[1],&a[2],&a[3],&a[4])!=EOF){
        sort(a,a+5);
        if(((a[0]==a[1])&&(a[2]==a[3])&&(a[2]==a[1]))||((a[1]==a[2])&&(a[2]==a[3])&&(a[3]==a[4])))str="four card";
        else if(((a[0]==a[1])&&(a[1]==a[2])&&(a[3]==a[4]))||((a[0]==a[1])&&(a[2]==a[3])&&(a[3]==a[4])))str="full house";
        else if(((a[0]==1)&&(a[1]==10)&&(a[2]==11)&&(a[3]==12)&&(a[4]==13))||((a[0]+1==a[1])&&(a[1]+1==a[2])&&(a[2]+1==a[3])&&(a[3]+1==a[4])))str="straight";
        else if(((a[0]==a[1])&&(a[1]==a[2]))||((a[1]==a[2])&&(a[2]==a[3]))||((a[2]==a[3])&&(a[3]==a[4])))str="three card";
        else if(((a[0]==a[1])&&((a[2]==a[3])||(a[3]==a[4])))||((a[1]==a[2])&&(a[3]==a[4])))str="two pair";
        else if((a[0]==a[1])||(a[1]==a[2])||(a[2]==a[3])||(a[3]==a[4]))str="one pair";
 
        cout<<str<<endl;
    }
    return 0;
}