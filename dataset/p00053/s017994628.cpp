#include <iostream>
unsigned long long a[100000],b[200000],c,n;
using namespace std;
int main(){
  for(int i=2;i<200000;i++)
    for(int j=i*2;j<200000;j+=i)
      b[j]++;
  for(int i=2;i<200000;i++)if(!b[i]){a[c+1]+=i+a[c];c++;}
  while(cin>>n,n)cout<<a[n]<<endl;
}