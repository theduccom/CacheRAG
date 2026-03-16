#include<iostream>
#define EPS 1e-10

using namespace std;


int main(){
  int n,A,B,C;
  while(cin >> n && n){
    for(int i=0;i<n;i++){
      cin >> A >> B >> C;
      if(A == 100 || B == 100 || C == 100)cout << "A" << endl;
      else if((A+B) >= 180)cout << "A" << endl;
      else if((A+B+C) >= 240)cout << "A" << endl;
      else if(A+B+C >= 210)cout << "B" << endl;
      else if((A+B+C)>=150 && (A>=80 || B>=80))cout << "B" << endl;
      else cout << "C" << endl;
    }
  }
  return 0;
}