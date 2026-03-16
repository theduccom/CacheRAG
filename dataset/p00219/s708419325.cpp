#include<iostream>
using namespace std;

int main(){
  int n,tmp;
  int a[10];

  while(1){
    cin >> n;
    if(!n)break;

    for(int i=0;i<10;i++)a[i]=0;

    for(int i=0;i<n;i++){
      cin >> tmp;
      a[tmp]++;
    }

    for(int i=0;i<10;i++){
      if(!a[i])cout << '-' << endl;
      else{
	for(int j=0;j<a[i];j++)cout << '*';
	cout << endl;
      }
    }
  }
}