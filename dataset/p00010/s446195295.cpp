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
 
 using namespace std;
 
 int main()
 {
   int n;
   cin>>n;
   while(n--)
   {
     double x1,y1,x2,y2,x3,y3;
     cin>>x1>>y1>>x2>>y2>>x3>>y3;
     double x=((y2-y1)*(y3*y3-y1*y1+x3*x3-x1*x1)-(y3-y1)*(y2*y2-y1*y1+x2*x2-x1*x1))/(2*(x3-x1)*(y2-y1)-2*((x2-x1)*(y3-y1)));  
     double y=((x2-x1)*(x3*x3-x1*x1+y3*y3-y1*y1)-(x3-x1)*(x2*x2-x1*x1+y2*y2-y1*y1))/(2*(y3-y1)*(x2-x1)-2*((y2-y1)*(x3-x1))); 
     double R=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
     printf("%.3lf %.3lf %.3lf\n",x,y,R);      
   }
   //while(1);      
   return 0;    
 }
 
 
 
 
 