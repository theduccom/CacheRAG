#include <iostream>
#include <vector>
using namespace std;
int p[1000000];
int main()
{
  int i,j,k=1;
  vector<int> v(10000);
  v[0] = 2;
  for(i=3;i<1000000;i+=2){
    if(p[i] == 0){
      v[k] = i + v[k-1];
      k++;
      if(k >= 10000) break;
      for(j=i*2;j<1000000;j+=i){
	p[j] = 1;
      }
    }
  }
  while(cin >> i,i){
    cout << v[i-1] << endl;
  }
  return 0;
}