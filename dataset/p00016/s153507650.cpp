 
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
 
 using namespace std;
 
 const double pi=3.14159265;
 
 int main()
 {
   int step,degree;
   double x,y;
   x=0;
   int count=0;
   double final_degree=0;
   char temp;
   while(cin>>step>>temp>>degree)
   {
     if(step==0&&degree==0) break;
     else
     {
       x=x+sin(final_degree/180*pi)*step;
       y=y+cos(final_degree/180*pi)*step;
       final_degree+=degree;
     }                        
   }
   printf("%d\n%d\n",(int)x,(int)y);
   //while(1);      
   return 0;    
 }
 
 