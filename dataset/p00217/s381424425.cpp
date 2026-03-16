#include<iostream>
using namespace std;
int main(){
  int n,bell,most2,number,length1,length2,totallength[10000],most1=-1;
  while(1){
    most1=-1;
    most2=0;
    cin >> n;
    if(n==0){
      break;
    }
    for(int i=0;i<n;i++){
      cin >> number >> length1 >> length2;
      totallength[number]=length1+length2;
      if(most1<totallength[number]){
	most1=totallength[number];
	most2=number;
      }
    }
    cout << most2 << " " << most1 << endl;
  }
  return (0);
}