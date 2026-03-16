#include<iostream>
#include<algorithm>
using namespace std;
int main(){
long n,i,j,k,c[8],cc,dd;
cin>>n;
for(i=0;i<n;i++){
cin>>k;
for(j=0;j<8;j++){c[j]=k%10;k/=10;}
sort(c,c+8);
for(cc=dd=0,j=0;j<8;j++){
cc=cc*10+c[j];
dd=dd*10+c[7-j];
}
cout<<dd-cc<<endl;
}
return 0;
}