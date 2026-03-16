#include<iostream>
using namespace std;
int main(){
long i;
cin>>i;
if(i==0){
cin>>i;
if(i==0){
cin>>i;
if(i==0)cout<<"Close"<<endl;
else cout<<"Open"<<endl;
}else{
cin>>i;
cout<<"Close"<<endl;
}
}else{
cin>>i;
if(i==0)cout<<"Close"<<endl;
else cout<<"Open"<<endl;
cin>>i;
}
return 0;
}