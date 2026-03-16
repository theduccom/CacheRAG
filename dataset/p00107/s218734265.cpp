#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
  while(1){
    int d,w,h,n;
    vector<int> r;
    int a,b,c;
    int small;

    cin>>d>>w>>h>>n;

    if(d==0 && w==0 && h==0)
      break;
    
    r.resize(n);

    a=d*d+w*w;
    a=sqrt(a);
    b=w*w+h*h;
    b=sqrt(b);
    c=d*d+h*h;
    c=sqrt(c);
    
    for(int i=0;i<r.size();i++){
      cin>>r[i];
      if(r[i]*2>a || r[i]*2>b || r[i]>c)
        cout<<"OK"<<endl;
      else if(r[i]*2<=a && r[i]*2<=b && r[i]*2<=c)
        cout<<"NA"<<endl;
    }
  }
}

