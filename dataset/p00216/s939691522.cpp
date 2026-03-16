#include<iostream>
using namespace std;
int main()
{
  while(true){
    int w;
    int val = 0;
    cin >> w;
    if( w == -1 ) break;
    
    val = 1150;
    int n = 0;
    int vs[] = {125,140,160};
    while(true){
      int t = w - 10*(n+1);
      if( t < 0 ) t = 0;
      if( t > 10 && n <= 1 ) t = 10;
      val += t * vs[n];
      ++n;
      if( n == 3 ) break;
    }
    cout << 4280 - val << endl; 
  }
  return 0;
}