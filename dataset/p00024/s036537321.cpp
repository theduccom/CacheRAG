#include<iostream>
using namespace std;

int main()
{
  int N=0;
  // int aa;
  double aa,n,ans=0;

  while(cin >> n){

    ans=n/9.8;
    aa=4.9*ans*ans;
    // cout << aa << endl;    
    N=0;
    while(5*N-5<=aa)N++;

    cout << N << endl;

  }





}