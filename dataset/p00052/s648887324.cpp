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
   int num;
   while(cin>>num&&num)
   { 
     int sum2,sum5;
     sum2=sum5=0;
     //cin>>num;
     for(int i=2;i<=num;i++)
     {
       int kk=i;
       while((kk%2==0))
       {
         sum2++;
         kk/=2;                 
       }       
       while((kk%5==0))
       {
         sum5++;
         kk/=5;                
       } 
     }         
     int qin=min(sum2,sum5);
     cout<<qin<<endl;       
   }
   //while(1);
   return 0;
 }