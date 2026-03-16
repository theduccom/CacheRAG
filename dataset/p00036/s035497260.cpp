 
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

 char arr[8][8];
 
 int main()
 {
   while(cin>>arr[0][0])
   {
     int x[4],y[4];
     int cnt1,cnt2;
     cnt1=cnt2=0;
     if(arr[0][0]=='1') 
     {
       x[cnt1++]=0;
       y[cnt2++]=0;                   
     }
     for(int i=0;i<8;i++)
     {
       for(int j=0;j<8;j++)
       {
           if(i==0&&j==0) continue;
           else
           {
             cin>>arr[i][j];
             if(arr[i][j]=='1')
             {
               x[cnt1++]=j;
               y[cnt2++]=i;                
             }
           }    
                 
       }        
     }             
     if(y[0]==y[1]&&y[2]==y[3]&&x[1]==x[0]+1&&x[3]==x[2]+1&&y[2]==y[0]+1&&x[3]==x[0]+1) cout<<"A"<<endl;
     else if(x[0]==x[1]&&x[1]==x[2]&&x[2]==x[3]) cout<<"B"<<endl;
     else if(y[0]==y[1]&&y[1]==y[2]&&y[2]==y[3]) cout<<"C"<<endl;
     else if(y[1]==y[2]&&y[3]==y[0]+2&&x[0]==x[3]+1) cout<<"D"<<endl;
     else if(x[1]==x[2]&&(x[3]==x[0]+2&&y[3]==y[0]+1)) cout<<"E"<<endl;
     else if(y[1]==y[2]&&y[3]==y[0]+2) cout<<"F"<<endl;
     else cout<<"G"<<endl;        
   }
   //while(1);
   return 0;
 }