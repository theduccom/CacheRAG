#include<iostream>
using namespace std;

int main(){
  int k=0;
  double a,high[10];
  while(cin>>high[k])
    k++;

  for(int j=0;j<k;j++)
    for(int i=0;i<k;i++)
      if(high[i]<high[i+1])
	swap(high[i],high[i+1]);

  for(int i=0;i<k;i++)
    a=high[0]-high[k-1];

    cout<<a<<endl;

  return 0;
}