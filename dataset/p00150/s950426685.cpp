#include <iostream>
using namespace std;
bool so[10000]={};

int main(){
  so[0] = 1;
  so[1] = 1;
  for(int i=2;i*i<=10000;i++)
    if(so[i] == 0)
      for(int j=2;j*i<=10000;j++)
	so[i*j] =1;
  int n;
  while(cin>>n && n){
    for(int i=n;i>=5;i--)
      if(so[i]==0 && so[i-2]==0){
	cout << i-2 <<" "<< i<<endl;
	break;
      }
  }

  return 0;
}