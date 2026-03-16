#include<iostream>

using namespace std;

int main() {
  int n;
  while(cin>>n){
    if(n==0){break;}
    int x,m;
    int a[10000];
    for(int i =0;i<1000;i++){
      a[i]=0;
    }
  for(int i =0;i<n;i++){
    cin >> m;
    a[m] += 1;
  }
  for(int j =0;j<10;j++){
    if(a[j]==0){
      cout << "-";
    }else{
      for(int k =0;k<a[j];k++){
	cout << "*";
      }
    }
    cout << endl;
  }
  }
	return 0;
}

