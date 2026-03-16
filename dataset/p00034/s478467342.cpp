 
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
   int N;
   int arr[10];
   int v1,v2;
   while(cin>>arr[0])
   {
     double sum=arr[0];
     char temp;
     cin>>temp;
     double sum2=0;
     for(int i=1;i<10;i++)
     {
       char temp_2;
       cin>>arr[i]>>temp_2;
       sum+=arr[i];
     }
     char temp_3;
     cin>>v1>>temp_3>>v2;
     int result;
     double dis=1.0*v1/(v1+v2)*sum;
     for(int i=0;i<10;i++)
     {
       sum2+=arr[i];
       if(dis<=sum2)
       { 
         result=i+1;
         break;
       }           
     }
     cout<<result<<endl;  
   }
   //while(1);     
   return 0; 
 }
 