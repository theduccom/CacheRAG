#include <iostream>
using namespace std;
bool so[50001]={};

int main(){
  so[0] = 1;
  so[1] = 1;
  for(int i=2;i*i<=50000;i++)
    if(so[i]==0)
      for(int j=2;j*i<=50000;j++)
	so[i*j] = 1;
  int n;
  while(cin>>n && n){
    int co=0;
    for(int i=2;i<=n/2;i++)
      if(so[i]==0 && so[n-i]==0) co++;
    cout <<co<<endl;
  }
  return 0;
}