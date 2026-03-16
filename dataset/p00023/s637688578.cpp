#include<iostream>
#include<cstdio>
#include<math.h>
#define NN 10000
using namespace std;

int main(){
  double d,x1[NN],x2[NN],y1[NN],y2[NN],r1[NN],r2[NN];
  int n,i,j;

  cin >> n;
  for(i=0;i<n;i++){
    cin >> x1[i] >> y1[i] >> r1[i] >> x2[i] >> y2[i] >> r2[i];
  }



  for(i=0;i<n;i++){
   

    d=sqrt((x1[i]-x2[i])*(x1[i]-x2[i])+(y1[i]-y2[i])*(y1[i]-y2[i]));

    



    if(d<r1[i]-r2[i])cout << "2" << endl;
    else if(d<r2[i]-r1[i])cout << "-2" << endl;
    else if(d == r1[i]-r2[i] || d == r2[i] - r1[i]) cout << "1" << endl;
    else if(d == r1[i]+r2[i])cout << "1" << endl;
    else if((r1[i]>=r2[i] && r2[i]-r1[i] < d && d < r2[i] + r1[i]) ||(r2[i]>=r1[i] && r1[i]-r2[i] < d && d < r1[i] + r2[i]))cout << "1" << endl;
    else if(d>r1[i]+r2[i])cout << "0" << endl;

  }

}