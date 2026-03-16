#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main(){
  int d,w,h;int n;
  while(true){
    cin>>d>>w>>h;
    if(d==0&&w==0&&h==0)break;
    if(d>w)swap(w,d);
    if(w>h)swap(h,w);
    cin>>n;
    int r;
    for(int i=0;i<n;i++){
      cin>>r;
      if(sqrt(d*d+w*w)<r*2)cout<<"OK"<<endl;
      else cout<<"NA"<<endl;
    }
  }
}