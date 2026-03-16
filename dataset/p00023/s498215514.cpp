 
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
   int n;
   int result;
   cin>>n;
   double xa,ya,ra,xb,yb,rb;
   while(n--)
   {
     cin>>xa>>ya>>ra>>xb>>yb>>rb;
     double dis=sqrt(pow(yb-ya,2)+pow(xb-xa,2));
     if(dis>ra+rb) result=0;
     else if(dis>=abs(ra-rb)) result=1;
     else
     {
       if(dis+ra<rb) result=-2;
       else if(dis+rb<ra) result=2;    
     }
     cout<<result<<endl;        
   }
   //while(1);      
   return 0;    
 }

 