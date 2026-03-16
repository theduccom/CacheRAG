#include<iostream>
#include<cmath>
using namespace std;

int main()
{
   double v;
   while( cin >> v )
   {
      double t = v / 9.8;
      double y = 4.9 * t * t;

      double temp = ((y + 5) / 5);
      int intemp = (int)temp;
      double dotemp = temp - intemp;
      if( 1 > dotemp && dotemp > 0 ) ++intemp;
      cout << intemp << endl;
   }
}