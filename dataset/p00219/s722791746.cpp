#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  while( cin >> n, n ) {
    int data[10000]={0};
    for(int i=0; i<n; i++) {
      int num;
      cin >> num;
      data[num]++;
    }

    for(int i=0; i<10; i++) {
      if( !data[i] ) cout << '-' << endl;
      else {
	for(int j=0; j<data[i]; j++) {
	  cout << '*';
	}
	cout << endl;
      }
    }
  }
}