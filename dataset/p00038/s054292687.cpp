 
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
 
 int arr[6];
 
 int main()
 {
   while(cin>>arr[0])
   {
     for(int i=1;i<5;i++)
     {
       char temp;
       cin>>temp>>arr[i];        
     }                  
     sort(arr,arr+5);
     if((arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[3])||(arr[1]==arr[2]&&arr[2]==arr[3]&&arr[3]==arr[4])) cout<<"four card"<<endl;
     else if((arr[0]==arr[1]&&arr[1]==arr[2]&&arr[3]==arr[4])||(arr[0]==arr[1]&&arr[2]==arr[3]&&arr[3]==arr[4])) cout<<"full house"<<endl;
     else if((arr[0]==arr[1]&&arr[1]==arr[2])||(arr[1]==arr[2]&&arr[2]==arr[3])||(arr[2]==arr[3]&&arr[3]==arr[4])) cout<<"three card"<<endl;
     else
     {
       int count=0;
       for(int i=0;i<4;i++)
       {
         if(arr[i]==arr[i+1]) count++;        
       }    
       if(count==1) cout<<"one pair"<<endl;
       else if(count==2) cout<<"two pair"<<endl;
       else
       {
         bool flag=true;
         for(int i=0;i<4;i++)
         {
           int kk=arr[i+1]-arr[i];
           if(!(kk==1||kk==9))
           {
             flag=false;
             break;                     
           }          
         }    
         if(flag) cout<<"straight"<<endl;
         else cout<<"null"<<endl; 
       }
     }       
   }
   //while(1);
   return 0;
 }

 