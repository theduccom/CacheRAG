#include<iostream>
using namespace std;
int p[104730]={0},n,s,i,j;
int main(){
  p[1]=1;
  for(i=2;i*i<104730;i++)
    if(!p[i])
      for(j=2;i*j<104730;j++)
	p[i*j]=1;

  while(cin>>n,n) {
    for(i=2,s=0;n;i++)
      if(!p[i])
	s+=i,n--;
    cout<<s<<endl;
  }
}