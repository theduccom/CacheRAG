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
 
 int arr[4000+5]={0};
 
 int main()
 {
   int n;
   while(cin>>n&&n)
   {
     int count=0;
     map<int,long long int> mm;
     bool flag=false;
     for(int i=0;i<n;i++)
     {
       int id,p,q;
       cin>>id>>p>>q;
       mm[id]+=(p*q);
       if(i==0) arr[count++]=id;
       int j;
       for(j=0;j<count;j++)     
       {
         if(arr[j]==id) break;        
       }   
       if(j==count) arr[count++]=id;
     }           
     for(int i=0;i<count;i++)
     {
       int kk=arr[i];
       if(mm[kk]>=1000000)
       { 
         cout<<arr[i]<<endl;
         flag=true;
       }        
     }
     if(!flag) cout<<"NA"<<endl;
   }
   //while(1);
   return 0;
 }