#include<iostream>
using namespace std;
int main(){
  int a[3]={1}; 
  char ch[3]={'A','B','C'};
  char d,e,f;
  while(cin>>d>>e>>f){
    for(int i=0;i<3;i++)
      if((d==ch[0]&&f==ch[1]) ||(d==ch[1]&&f==ch[0]))
	swap(a[0],a[1]);
      else if((d==ch[0]&&f==ch[2]) ||(d==ch[2]&&f==ch[0]))
	swap(a[0],a[2]);
      else if((d==ch[1]&&f==ch[2]) ||(d==ch[2]&&f==ch[1]))
	swap(a[1],a[2]);
  }
  for(int i=0;i<3;i++)
    if(a[i]==1)
	cout<<ch[i]<<endl;
  return 0;
}