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
 
 bool is_prime(int x)
 {
   if(x==2) return true;
   else
   {
     for(int i=2;i<=sqrt(x);i++)
     {
        if(x%i==0) return false;        
     }    
     return true;
   }     
 }

 int main()
 {
   int n;
   int arr[10000+5];
   int count=1;
   int num=3;
   arr[0]=2;
   while(count<=10000)
   {
     if(is_prime(num)) 
     {
       arr[count++]=num;                  
     }                  
     num+=2;   
   }
   //for(int i=0;i<100;i++) cout<<arr[i]<<endl;
   while(cin>>n&&n)
   {
     int sum=0;
     for(int i=0;i<n;i++) sum+=arr[i];
     cout<<sum<<endl;                  
   }
   //while(1);
   return 0;
 }

 