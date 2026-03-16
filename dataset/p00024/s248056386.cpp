 
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
 
 double abs(double x)
 {
   if(x<0) return -x;
   else return x;       
 }
  
 int main()
 {
   double v;
   while(cin>>v)
   {
     double t=v/9.8;
     double h=4.9*t*t;
     int N=(int)((h+5)/5)+1;
     cout<<N<<endl;
   }
   //while(1);      
   return 0;    
 }

 