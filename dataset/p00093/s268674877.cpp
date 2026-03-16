#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  while(true){
    if(!a&&!b)break;
    a--;
    if (b/4-a/4-b/100+a/100+b/400-a/400){
      for(int i=a/4*4+4;i<b+1;i+=4)
	if(i%100)cout<<i<<endl;
	else if(!(i%400))cout<<i<<endl;
    }
    else{
      cout<<"NA"<<endl;
    }
    cin>>a>>b;
    if(!a&&!b)break;
    cout<<endl;
  }
  return 0;
}