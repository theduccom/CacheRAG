//52
#include<iostream>

using namespace std;

#define S(X) ((X)*(X))

int main(){
  int N;
  cin>>N;
  while(N--){
    double x[2],y[2],r[2];
    for(int i=0;i<2;i++){
      cin>>x[i]>>y[i]>>r[i];
    }
    double ds=S(x[0]-x[1])+S(y[0]-y[1]);
    int ans;
    if(r[0]>r[1]&&ds<S(r[0]-r[1])){
      ans=2;
    }else if(r[1]>r[0]&&ds<S(r[1]-r[0])){
      ans=-2;
    }else if(ds<=S(r[0]+r[1])){
      ans=1;
    }else{
      ans=0;
    }
    cout<<ans<<endl;
  }
  return 0;
}