#include<iostream>
using namespace std;
int main(){
char a[][11]={"null","one pair","two pair","three card","straight","full house","four card"};
long i,h,f,hh[14];
char c;
while(cin>>h){
for(i=0;i<13;i++)hh[i]=0;
hh[h-1]++;
for(i=1;i<5;i++){cin>>c>>h;hh[h-1]++;}
f=0;
for(i=0;i<13;i++){
if(hh[i]==4){
f=6;
}else if(hh[i]==3){
if(f==1)f=5;else f=3;
}else if(hh[i]==2){
if(f==3)f=5;
else if(f==1)f=2;
else f=1;
}
}
if(f==0){
  for(i=0;i<13;i++)if(hh[i]==1)break;
  if(i<9){
  if(hh[i+1]==1)
  if(hh[i+2]==1)
  if(hh[i+3]==1)
  if(hh[i+4]==1)f=4;
  }
  if(i==0){
  if(hh[i+9]==1)
  if(hh[i+10]==1)
  if(hh[i+11]==1)
  if(hh[i+12]==1)f=4;
  }
}
cout<<a[f]<<endl;
}
return 0;
}