#include<iostream>
#include<cstring>
using namespace std;

string a[10000];

int solve(int i,int j){

  if(a[i][j] == '1') a[i][j] = '0';

  if(i + 1 < 12 && a[i+1][j] == '1') solve(i+1,j);
  if(j + 1 < 12 && a[i][j+1] == '1') solve(i,j+1);
  if(i - 1 > -1 && a[i-1][j] == '1') solve(i-1,j);
  if(j - 1 > -1 && a[i][j-1] == '1') solve(i,j-1);
}

int main(){

  while(cin >> a[0]){

    for(int i=1;i<12;i++) cin >> a[i];

    int count = 0;

    for(int i=0;i<12;i++){
      for(int j=0;j<12;j++){
	if(a[i][j] == '1'){
	  count++;
	  solve(i,j);
	}
      }
    }

    cout << count << endl;
  }
}