#include<iostream>
#include<iomanip>
using namespace std;

void print(int a,bool f){
  cout << setw(5) << right << a;
  if(f)cout << endl;
}

int main(){
  int n;
  int a[10][10];
  int row[10],col;

  while(cin >> n,n){
    for(int i=0;i<n;i++){
      row[i] = 0;
      for(int j=0;j<n;j++)cin >> a[i][j];
    }

    for(int i=0;i<n;i++){
      col = 0;
      for(int j=0;j<n;j++){
	row[j] += a[i][j];
	col += a[i][j];
	print(a[i][j],0);
      }
      print(col,1);
    }

    col = 0;
    for(int i=0;i<n;i++){
      col += row[i];
      print(row[i],0);
    }
    print(col,1);
  }
}
      