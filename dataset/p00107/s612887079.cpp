
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  while(1){
    int a,b,c,d[10010],n,i,j,temp;
    cin >> a >> b >> c;
    temp=c*c+b*b;
    if(a == 0 && b== 0 && c == 0){
      break;
    }
    cin >> n;
    for(i=0;i<n;i++){
      cin >> d[i];
      if(sqrt(temp) < d[i]*2){
	cout << "OK" << endl;
      }
      else if(c >= d[i]*2 || b >= d[i]*2){
	cout << "NA" << endl;
      }
      else{
	cout << "NA" << endl;
      }
    }
  }
}