#include<bits/stdc++.h>
using namespace std;

int main()
{
  double x,h,result;
  while(1){
    cin >> x >> h;
    if(x+h==0)break;
    result = sqrt((x*x)/4 + h*h)*2*x + x*x;
    printf("%.10f\n",result);
  }
  return 0;
}