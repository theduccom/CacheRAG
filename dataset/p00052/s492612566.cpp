#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  while(1){
    int n;
    cin>>n;
    if(!n)break;
    int sum=0;
    while(n){
      n /= 5;
      sum += n;
    }
    cout<<sum<<endl;
  }
  return 0;
}