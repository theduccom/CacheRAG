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
   cin>>N;
   while(N--)
   {
     string com;
     int arr[3]={0};
     int score=0;
     int out=0;
     while(cin>>com)
     {
       if(com=="OUT") out++;
       if(out==3) break;
       if(com=="HIT")
       {
         if(arr[0]==0) arr[0]++;
         else if(arr[1]==0) arr[1]++;
         else if(arr[2]==0) arr[2]++;
         else score++;              
       }
       if(com=="HOMERUN")
       {
         score+=(arr[0]+arr[1]+arr[2]+1);
         arr[0]=0;
         arr[1]=0;
         arr[2]=0;                  
       }
     }          
     cout<<score<<endl;
   }
   //while(1);
   return 0;
 }

 