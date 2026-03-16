#include<iostream>
#include<cstdio>
using namespace std;
int main(){
long n,i,j,s,a[11][11];
while(cin>>n){
if(n==0)break;
for(i=0;i<n;i++)
for(j=0;j<n;j++)cin>>a[i][j];
for(i=0;i<n;i++){
for(s=0,j=0;j<n;j++)s+=a[i][j];
a[i][j]=s;
}
for(j=0;j<=n;j++){
for(s=0,i=0;i<n;i++)s+=a[i][j];
a[i][j]=s;
}
for(i=0;i<=n;i++){
for(j=0;j<=n;j++)printf("%5d",a[i][j]);
printf("\n");
}
}
return 0;
}