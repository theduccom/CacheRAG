#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);

  int n;
  int h[10];
  int temp;

  while(1){
    cin >> n;
    if(n == 0) break;

    for(int i = 0;i < 10;++i) h[i] = 0;

    for(int i = 0;i < n;++i){
      cin >> temp;
      h[temp]++;
    }

    for(int i = 0;i < 10;++i){
      if(h[i] == 0){
	cout << "-" << endl;
      }else{
	for(int j = 0;j < h[i];++j){
	  cout << "*";
	}
	cout << endl;
      }
    }

  }

  return 0;
}

