#include<iostream>
using namespace std;
int money(int m){
int money=1150;
if(m<=10)return money;
if(m<=20&&m>10)return money+125*(m-10);
if(m<=30&&m>20)return money+10*125+140*(m-20);
if(m>30)return money+10*125+10*140+160*(m-30);
}
int main(){
int w;
while(true){
cin>>w;
if(w==-1)return 0;
cout<<4280-money(w)<<endl;
}
}