#include <iostream>

using namespace std;
int main(void){
    // Here your code !
int n;

while(cin>>n){
bool flag=false;

for(int i=1;i<=512;i=i*2){

if(n%(i*2)!=0){
    if(flag) cout<<" ";
    flag=true;
    cout<<i;
    n=n-i;
}
}

cout<<endl;
}
return 0;
}