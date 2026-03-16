#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  int n,m;
  vector<int> p;

  int sum;

  
  while(cin >> n >> m) {

    if(n==0 && m==0) break;

    p.clear();

    for(int i=0;i<n;i++) {

      int temp;

      cin >> temp;

      p.push_back(temp);

    }

    sort(p.begin(),p.end(),greater<int>());

    //for(int i=0;i<(int)p.size();i++) cout << p[i] << " ";

    sum=0;

    for(int i=0;i<(int)p.size();i++) {

      if(i%m!=m-1) sum+=p[i];

    }

    cout << sum << endl;

  }

  return 0;

}