#include <iostream>
#include <vector>
#include <iomanip>
 
using namespace std;
 
int main(){
  int n;
  while(cin>>n&&n){
    vector<int> data((n+1)*(n+1));
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>data[i*(n+1)+j];
        data[i*(n+1)+n]+=data[i*(n+1)+j];
        data[n*(n+1)+j]+=data[i*(n+1)+j];
        data[(n+1)*(n+1)-1]+=data[i*(n+1)+j];
      }
    }
    for(int i=0;i<n+1;i++){
      for(int j=0;j<n+1;j++){
        cout<<setw(5)<<data[i*(n+1)+j];
      }
      cout<<endl;
    }
  }
}