#include<iostream>
using namespace std;
int main(){

  int c=0;
  char d;
  double in1,in2,sum1=0,sum2=0,ave=0;
  while(cin >> in1 >> d >> in2!='\0'){
    sum1+=in2;
    sum2+=in1*in2;
    c++;
  }
  ave=sum1/c;
  if(ave-(int)ave>=0.5) ave+=1;

  cout << sum2 << endl << (int)ave << endl;

}