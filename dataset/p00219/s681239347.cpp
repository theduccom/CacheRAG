#include<iostream>
#include<string>
using namespace std;
int main(){
long n,i,j;
string s[10];
while(cin>>n,n){
for(j=0;j<10;j++)s[j]="";
for(i=0;i<n;i++){
cin>>j;
s[j]+="*";
}
for(j=0;j<10;j++){
if(s[j]=="")cout<<"-"<<endl;else cout<<s[j]<<endl;
}
}
return 0;
}