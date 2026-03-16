#include <iostream>
using namespace std;

int main(){
  int n;

  while(cin>>n,n){
    int maxSum = -1;
    int maxNum = -1;

    for(int i=0;i<n;i++){
      int p,d1,d2;
      cin>>p>>d1>>d2;
      if(maxSum < d1 + d2){
        maxSum = d1 + d2;
        maxNum = p;
      }
    }

    cout<<maxNum<<" "<<maxSum<<endl;
  }
}