#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

  int n,m;

  while(cin >> n, n){
    int a[100000] = {0};
    for(int i=0;i<n;i++){
      cin >> m;
      a[m]++;
    }

    for(int i=0;i<10;i++){
      for(int j=0;j<a[i];j++) cout << "*";
      if(a[i] == 0) cout << "-";
      cout << endl;
    }
  }

}