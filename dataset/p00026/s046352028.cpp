 
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
 
 using namespace std;
 
 double abs(double x)
 {
   if(x<0) return -x;
   else return x;       
 }
 
 bool judge(int x,int y)
 {
   if(x>=0&&x<10&&y>=0&&y<10) return true;
   else return false;     
 }
  
 int main()
 {
   int map[10][10]={{0}};
   int x,y,s;
   int dep=0;
   int blank=0;
   char temp,temp2;
   while(cin>>x>>temp>>y>>temp2>>s)
   {
     if(s==1)
     {
       if(judge(x-1,y)) map[x-1][y]++;
       if(judge(x+1,y)) map[x+1][y]++;
       if(judge(x,y+1)) map[x][y+1]++;
       if(judge(x,y-1)) map[x][y-1]++;
       if(judge(x,y)) map[x][y]++;        
     }                   
     else if(s==2)
     {
       for(int i=-1;i<=1;i++)
       {
         for(int j=-1;j<=1;j++)
         {
           if(judge(x+i,y+j)) map[x+i][y+j]++;       
         }        
       }     
     }
     else
     {
       for(int i=-1;i<=1;i++)
       {
         for(int j=-1;j<=1;j++)
         {
           if(judge(x+i,y+j)) map[x+i][y+j]++;       
         }        
       }   
       if(judge(x-2,y)) map[x-2][y]++;
       if(judge(x+2,y)) map[x+2][y]++;
       if(judge(x,y+2)) map[x][y+2]++;
       if(judge(x,y-2)) map[x][y-2]++;    
     }
   }
   for(int i=0;i<10;i++)
   {
     for(int j=0;j<10;j++)
     {
       if(!map[i][j]) blank++;
       if(map[i][j]>dep) dep=map[i][j];        
     }        
   }
   cout<<blank<<endl;
   cout<<dep<<endl;
   //while(1);      
   return 0;    
 }

 