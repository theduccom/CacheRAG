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
   int w,h;
   char map[100+5][100+5];
   while(cin>>h>>w&&(w||h))
   {
     bool flag=false;
     int map2[100+5][100+5]={{0}};
     for(int i=0;i<h;i++)
     {
       for(int j=0;j<w;j++)
       {
         cin>>map[i][j];        
       }        
     }               
     int step=0;
     int x=0;
     int y=0;
     while(1)
     {
       if(map2[x][y]==1) 
       {
         flag=true;
         break;                  
       }
       if(map[x][y]=='>') 
       {
         map2[x][y]=1;
         y++;
         step++;
         //cout<<">"<<" ";                      
       }        
       if(map[x][y]=='<')
       {
         map2[x][y]=1;
         y--;
         step++;   
         //cout<<"<"<<" ";                   
       }
       if(map[x][y]=='v')
       {
         map2[x][y]=1;
         x++;
         step++;         
         //cout<<"v"<<" ";             
       }
       if(map[x][y]=='^')
       {
         map2[x][y]=1;
         x--;
         step++;         
         //cout<<"^"<<" ";             
       }
       if(map[x][y]=='.')
       {
         break;                  
       }
       if(flag) break;
     }        
     if(flag) cout<<"LOOP"<<endl;
     else cout<<y<<" "<<x<<endl;
   }
   //while(1);
   return 0;
 }

 
 