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
 
 using namespace std;
 
 int main()
 {
   double h;
   double max=0;
   double min=1000000+5;
   while(cin>>h)
   {
     if(h>max) max=h;
     if(h<min) min=h;              
   }
   double range=max-min;
   printf("%.1lf\n",range);
   //while(1);
   return 0;
 }