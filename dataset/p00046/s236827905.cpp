#include <iostream>
using namespace std;

int main(){
  double max,min=1000001,m;
  cin>>max;
  while(cin>>m){
    if(max<m)max=m;
    else if(min>m)min=m;
    
  }
  cout<<max-min<<endl;
  return 0;
}