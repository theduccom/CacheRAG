#include<iostream>
#include<string>
using namespace std;
int main(){
long n,i,j,k,x,y;
string s[8],t[8],u;
cin>>n;
for(k=0;k<n;k++){
for(i=0;i<8;i++)cin>>s[i];
cin>>x>>y;x--;y--;
L1:
for(i=-3;i<=3;i++){
if(-1-y<i&&i<8-y)if(s[y+i][x]=='1')s[y+i][x]='*';
if(-1-x<i&&i<8-x)if(s[y][x+i]=='1')s[y][x+i]='*';
}
s[y][x]='0';
for(i=0;i<8;i++)
for(j=0;j<8;j++)if(s[i][j]=='*'){s[i][j]=='0';y=i;x=j;goto L1;}
cout<<"Data "<<k+1<<":"<<endl;
for(i=0;i<8;i++)cout<<s[i]<<endl;
}
return 0;
}