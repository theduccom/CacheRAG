 
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
 
 int arr[10]={1,2,4,8,16,32,64,128,256,512}; 
  
 int main()
 {
   int N;
   while(cin>>N)
   {
     int count=0;
     int num[10]={0};
     while(N)
     {
       num[count++]=N%2;
       N/=2;        
     }      
     for(int i=0;i<count-1;i++)
     {
       if(num[i]) cout<<arr[i]<<" ";
     }
     if(num[count-1]) cout<<arr[count-1]<<endl;
     else cout<<endl;           
   }
   //while(1);     
   return 0;  
 }
 