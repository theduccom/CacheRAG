 
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
 
 bool is_prime(int x)
 {
   for(int i=2;i<=(int)sqrt(x);i++)
   {
     if(x%i==0) return false;        
   }     
   return true;
 }
 
 int main()
 {
   int N;
   while(cin>>N)
   {
     int min=N;
     int max=N;
     while(min--) if(is_prime(min)) break;   
     while(max++) if(is_prime(max)) break;
     cout<<min<<" "<<max<<endl;            
   }
   //while(1);
   return 0;
 }