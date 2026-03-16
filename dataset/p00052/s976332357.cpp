#include <iostream>
using namespace std;

int main(){
  int n[20001][2]={0},a,k,c,h;
  k=0;
  c=0;
  for(int i=1;i<20001;i++){
    h=i;
    while(h%2==0){
      k++;
      h/=2;
    }
    h=i;
    while(h%5==0){
      c++;
      h/=5;
    }
    n[i][0]=k;
    n[i][1]=c;
  }
  while(1){
    cin>>a;
    if(a==0)break;
    else {
      if(n[a][1]>=n[a][0])cout<<n[a][0]<<endl;
      if(n[a][1]<n[a][0])cout<<n[a][1]<<endl;
    }
  }
  return 0;
}

	 