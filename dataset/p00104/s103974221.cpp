#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<map>
using namespace std;

int main(){
   int W,H,i,j;
   int map[200*200],flag[200*200];
   int answ,ansh,now;
   
   for(;;){
      cin>>W>>H;
      if(W==0&&H==0) break;
      memset(flag,0,sizeof(flag));
      answ=0;ansh=0;now=0;
      
      for(i=0;i<W;i++){
         for(j=0;j<H;j++){
            map[i*H+j] = getchar();
            if(map[i*H+j]=='\n')
               map[i*H+j] = getchar();
         }
      }
      
      while(flag[now]==0){
         flag[now]++;
         
         if(map[now]=='>'){
            answ++;
            now++;
         }
         else if(map[now]=='<'){
            answ--;
            now--;
         }
         else if(map[now]=='^'){
            ansh--;
            now-=H;
         }
         else if(map[now]=='v'){
            ansh++;
            now+=H;
         }
         else if(map[now]=='.'){
            flag[now]=0;
            break;
         }
      }
      if(flag[now] == 0)
         cout<<answ<<" "<<ansh<<endl;
      else
         cout<<"LOOP"<<endl;
   }
   return 0;
}