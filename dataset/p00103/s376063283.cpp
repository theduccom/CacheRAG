#include <iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 while(n){
  int o=0,a=0,b=0;
  while(o!=3){
   string s;
   cin>>s;
   if(s=="HIT"){
    if(b==3)a++;
    else b++;
   }
   else if(s=="OUT")o++;
   else{
   a+=++b;
   b=0;
   }
  }
  cout<<a<<endl;
  n--;
 }
}