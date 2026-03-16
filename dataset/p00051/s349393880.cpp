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
   int n;
   cin>>n;
   int arr_min[8];
   int arr_max[8];
   while(n--)
   {
     int a;
     cin>>a;
     for(int i=0;i<8;i++)
     {
       arr_min[i]=a%10;
       a/=10;        
     }       
     sort(arr_min,arr_min+8);
     int min,max;
     min=max=0;
     for(int i=0;i<8;i++) arr_max[i]=arr_min[8-i-1];
     for(int i=0;i<8;i++)
     {
       min=10*min+arr_min[i];
       max=10*max+arr_max[i];          
     }  
     cout<<(max-min)<<endl;
   }
   //while(1);
   return 0;
 }