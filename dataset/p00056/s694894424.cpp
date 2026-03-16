#include <iostream>
using namespace std;

int main(){
  bool a[100000];

  a[0]=a[1]=false;
  for(int i=2;i<100000;i++){
    a[i]=true;
  }

  for(int i=2;i*i<100000;i++){
    if(a[i]){
      for(int j=i*i;j<100000;j+=i){
        a[j]=false;
      }
    }
  }

  while(true){
    int m;
    cin>>m;
    int count=0;

    if(m==0){
      break;
    }

    for(int i=2;i<=m/2;i++){
      if(a[i]){
        if(a[m-i]){
          count++;
        }
      }
    }

    cout<<count<<endl;

  }

  return 0;
}

