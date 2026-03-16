#include<iostream>
using namespace std;
int main(){
long n,i,s;
while(cin>>n,n){
for(s=0;n>0;n/=5)s+=n/5;
cout<<s<<endl;
}
return 0;
}