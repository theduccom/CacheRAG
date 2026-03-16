#include<iostream>
using namespace std;
int main(){
  while(1){
    int data[10001][4]={0};
    int n,p;
    int max=0,maxn;
    cin >> n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin >> p;
      data[i][0]=p;
      cin >> data[i][1] >> data[i][2];
      data[i][3]=data[i][1]+data[i][2];
    }
    for(int i=0;i<n;i++){
      if(max<data[i][3]){
	max=data[i][3];
	maxn=i;
      }
    }
    cout << data[maxn][0] << " " << max << endl;
  }
}