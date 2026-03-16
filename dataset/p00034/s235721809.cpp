#include <iostream>
using namespace std;

int main(){
  int a[12]={0},v1,v2;
  char s;
  double l;
  while(cin >>a[1]>>s>>a[2]>>s>>a[3]>>s>>a[4]>>s>>a[5]>>s>>a[6]>>s>>a[7]>>s>>a[8]>>s>>a[9]>>s>>a[10]>>s>>v1>>s>>v2){
    for(int i=1;i<=10;i++)a[i]+=a[i-1];
    l=(double) a[10]*(double) v1/( (double) v1+(double) v2);
    for(int i=1;i<=10;i++){
      if(a[i]>=l){
	cout<<i<<endl;
	break;
      }
    }
  }
  return 0;
}