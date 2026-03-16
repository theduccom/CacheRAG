#include <iostream>
#include <cstdio>
using namespace std;
char a[100][101];
int h,w;
 
int main() {
        while(1){
     cin>>h>>w;
     bool flag=true;
     if(!h&&!w)break;
     for(int i=0;i<h;i++){
         scanf("%s",a[i]);
     }
     int x=0,y=0;
     for(int i=0;i<h*w+1;i++){
         if(a[y][x]=='>')x++;
         if(a[y][x]=='<')x--;
         if(a[y][x]=='^')y--;
         if(a[y][x]=='v')y++;
         if(i==h*w&&a[y][x]!='.')flag=false;
     }
     if(flag)cout<<x<<" "<<y<<endl;
     else cout<<"LOOP"<<endl;
        }
        return 0;
}