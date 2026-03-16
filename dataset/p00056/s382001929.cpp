#include<iostream>
using namespace std;
int main() {
  int list[50000];
  int i,j,c;
  for(i=2;i<50002;i++)list[i-2]=i;
  for(j=2;j*j<50003;j++)
    if(list[j-2]!=0)
      for(i=1;j-2+list[j-2]*i<50001;i++)
	list[j-2+list[j-2]*i]=0;

  while(1){
    cin>>i,c=0;
    if(i==0)break;
    for(j=2;j<=(i/2);j++)
      if((list[j-2]!=0)&&(list[i-j-2]!=0))c++;
    cout<<c<<endl;
  }
}