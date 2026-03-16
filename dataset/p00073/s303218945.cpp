#include <iostream>
using namespace std;
#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i,j,k,l;
   long double x;
   long double h;
   while(1) {
      cin >> x >> h;
      if (x == 0 && h == 0) break;
      printf("%llf\n", x*x + 2 *x * sqrtl(x/2*x/2+h*h));
   }
   
   return 0;
}