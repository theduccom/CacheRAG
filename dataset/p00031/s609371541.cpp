//C++14 (Clang 3.8.0)

#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <climits>
using namespace std;
typedef long long ll;
typedef pair<long long,long long> P;
int v[30];
int main(){
  v[0]=1;
  for(int i=1;i<10;i++){
    v[i]=v[i-1]*2;
  }
  int s;
  while(cin>>s){
    vector<int> b;

    for(int i=9;i!=-1;i--){
      if(s==0)break;
      if(s>=v[i]){
        b.push_back(v[i]);
        s-=v[i];

      }
    }
    sort(b.begin(),b.end());
    for(int i=0;i<b.size()-1;i++){
      if(b[i])cout<<b[i]<<" ";
    }
    cout<<b[b.size()-1]<<endl;
    
  }

  return 0;
}

