#include <iostream>
#include <algorithm>

using namespace std;

main(){
  int n, m, p;
  int data[1000];

  while(1){
    cin >> n >> m;
    if(n==0 && m==0) break;

    for(int i=0;i<n;i++){
      cin >> data[i];
    }

    sort(data, data+n);
    int sum=0;

    for(int i=n, count=0;i>=0;i--, count++){
      if(count%m!=0){
	sum+=data[i];
      }
    }

    cout << sum << endl;
  }
  return 0;
}