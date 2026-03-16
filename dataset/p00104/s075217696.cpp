#include<iostream>
#include<string>
using namespace std;
int main(){
long h,w,a[101][101],f,i,j;
string s[101];
for(;;){
cin>>h>>w;
if(h==0)break;
for(i=0;i<h;i++)cin>>s[i];
for(i=0;i<h;i++)
for(j=0;j<w;j++)a[i][j]=0;
i=j=0;
a[i][j]=1;
for(;;){
if(s[i][j]=='>')j++;
else if(s[i][j]=='<')j--;
else if(s[i][j]=='^')i--;
else if(s[i][j]=='v')i++;
else{f=0;break;}
if(a[i][j]==1){f=1;break;}
a[i][j]=1;
}
if(f==0)cout<<j<<" "<<i<<endl;
else cout<<"LOOP"<<endl;
}
return 0;
}