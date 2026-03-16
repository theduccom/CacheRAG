 #include<iostream>
 #include<stdio.h>
 #include<string>
 #include<math.h>
 #include<iomanip>
 #include<algorithm>
 #include<string.h>
 #include<cctype>
 #include<map>
 #include<set>
 #include<vector>
 #include<sstream>
 #include<stack>
 #include<queue>
 #include<deque>
 #include<functional>
 #include<utility>
 
 using namespace std;
 
 int main()
 {
   int x,h;
   while(cin>>x>>h&&(x||h))
   {
     double S_base=1.0*x*x;
     double hh=sqrt(1.0*pow(h,2)+1.0*(pow(1.0*x/2,2)));
     double S_side=1.0/2*hh*x;
     double result=S_base+4*S_side;
     printf("%.6lf\n",result);                
   }
   //while(1);
   return 0;
 }

 
  