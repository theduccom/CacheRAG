#include <iostream>
#include <string>
#include <math.h>
using namespace std;
 
int main()
{
   int n;
   double xa,ya,ra,xb,yb,rb;
   cin >> n;
   for (int i=0;i<n;i++){
       cin >> xa >> ya >> ra >> xb >> yb >> rb;
       double d;
       d = sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
       if (d > ra + rb){
           cout << 0 << endl;  //交わらない
       } else if (d < ra - rb){
           cout << 2 << endl;  //B in A
       } else if (d < rb - ra){
           cout << -2 << endl;  //A in B
       } else {
           cout << 1 << endl;  //交わる
       }
   }
 
    return 0;
}