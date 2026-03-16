#include<iostream>
using namespace std;
int main(){
long u,n,su=0,sn=0,s=0;
char c;
while(cin>>u){
cin>>c>>n;
su+=u*n;
sn+=n;
s++;
}
cout<<su<<endl;
cout<<int(double(sn)/s+.5)<<endl;
return 0;
}