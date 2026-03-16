#include<iostream>
using namespace std;
string s[100];
bool used[100][100];
int h,w;
int dx[]={0,1,0,-1},dy[]={1,0,-1,0};
main()
{
    while(cin>>h>>w,h)
    {
        for(int i=0;i<h;i++)
        {
            cin>>s[i];
            for(int j=0;j<w;j++)used[i][j]=0;
        }
        int x=0,y=0,f=0;
        while(!used[x][y])
        {
            used[x][y]=1;
            if(s[x][y]=='.')
            {
                f=1;
                cout<<y<<" "<<x<<endl;
                break;
            }
            int r=s[x][y]=='>'?0:s[x][y]=='<'?2:s[x][y]=='v'?1:3;
            x+=dx[r],y+=dy[r];
        }
        if(!f)cout<<"LOOP"<<endl;
    }
}
