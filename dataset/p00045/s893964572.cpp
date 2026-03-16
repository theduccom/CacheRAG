 
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
   int price,num;
   int sum=0;
   int total_sum=0;
   int count=0;
   char temp;
   while(cin>>price>>temp>>num)
   {
     sum+=price*num;         
     total_sum+=num;
     count++;  
   }
   double ave=1.0*total_sum/count;
   printf("%d\n%d\n",sum,(int)(ave+0.5));
   //while(1);
   return 0;
 }

 
 