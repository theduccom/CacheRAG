#include <iostream>
using namespace std;

int main(){
  bool a[1000000];

  a[0]=a[1]=false;
  for(int i=2;i<1000000;i++){
    a[i]=true;
  }

  for(int i=2;i*i<1000000;i++){
    if(a[i]){
      for(int j=i*i;j<1000000;j+=i){
        a[j]=false;
      }
    }
  }

  int min,max;

  while(true){
    int m;
    cin>>m;

    if(cin.eof()){
      break;
    }

    for(int i=3;i<m;i++){
      if(a[i]){
        max=i;
      }
    }

    for(int i=m+1;i<=1000000;i++){
      if(a[i]){
        min=i;
        break;
      }
    }

    if(m==3){
      max=2;
    }

    cout<<max<<' '<<min<<endl;

  }

  return 0;
}

