#include<iostream>
using namespace std;
int main(){
  int n;
  int i,j;
  while(1){
    cin >> n;
    if(n==0)break;
    int data[11][11]={0};
    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	cin >> data[i][j];
	data[i][n]+=data[i][j];
	data[n][j]+=data[i][j];
	data[n][n]+=data[i][j];
      }
     }
    for(i=0;i<=n;i++){
      for(j=0;j<=n;j++){
	cout.width(5);
	//	cout.fill(' ');
	cout << data[i][j];
      }
      cout << endl;
    }
  }
}