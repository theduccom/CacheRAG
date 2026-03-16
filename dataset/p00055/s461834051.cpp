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
   double a;
   while(cin>>a)
   {
     double sum=a;
     for(int i=1;i<=9;i++)
     {
       if(i%2==1) a*=2;
       else a/=3;
       sum+=a;      
     }        
     printf("%.8lf\n",sum);     
   }
   //while(1);
   return 0;
 }