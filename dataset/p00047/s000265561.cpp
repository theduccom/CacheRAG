#include<iostream>
using namespace std;
int main(){
  int a[3]={1}; 
  char ch[3]={'A','B','C'};
  char d,e,f;
  while(cin>>d>>e>>f)
    for(int i=0;i<3;i++)
      for(int j=0;j<3;j++){
	if(i!=j)
	  if(d==ch[i]&&f==ch[j])
	    swap(a[i],a[j]);
      }

  for(int i=0;i<3;i++)
    if(a[i]==1)
	cout<<ch[i]<<endl;
  return 0;
}