#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int w,h;
    while(cin>>h>>w,h) 
    {
        string f[h];
        for(int i = 0; i < h; ++i)
        {
            cin>>f[i];
        }
 
        bool used[h][w];
        memset(used,0,sizeof(used));
 
        int x=0,y=0;
        while(1) 
        {
            if(used[y][x])
            {
                cout<<"LOOP"<<endl;
                break;
            }
            if(f[y][x]=='.')
            {
                cout<<x<<" "<<y<<endl;
                break;
            }
            used[y][x]=true;
 
            if(f[y][x]=='>') x+=1;
            if(f[y][x]=='<') x-=1;
            if(f[y][x]=='^') y-=1;
            if(f[y][x]=='v') y+=1;
        }
    }
  return 0;
}