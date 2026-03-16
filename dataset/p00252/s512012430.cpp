#include <iostream>
using namespace std;
int main(void){
int a,l,o;
cin>>a>>l>>o;
if((a==0&&l==0&&o==0)||(a==1&&l==0&&o==0)||(a==0&&l==1&&o==0)){
  cout<<"Close"<<endl;  
}
if((a==1&&l==1&&o==0)||(a==0&&l==0&&o==1)){
  cout<<"Open"<<endl;  
}


}

