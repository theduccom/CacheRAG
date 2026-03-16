#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    int x,y,z;
    while(1){
      cin>>x>>y>>z;
      if(x==0&&y==0&&z==0) return 0;
      int n;
      cin>>n;
      int a[10000];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      double b[3];
      b[0]=sqrt(x*x+y*y);
      b[1]=sqrt(z*z+y*y);
      b[2]=sqrt(x*x+z*z);
      sort(b,b+3);
      double min=b[0];
      for(int i=0;i<n;i++){
          if((double)a[i]>(0.5*min)) cout<<"OK"<<endl;
          else cout<<"NA"<<endl;
      }
    }       
}