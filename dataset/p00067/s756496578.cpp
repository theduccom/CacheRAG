#include<iostream>
#include<queue>
using namespace std;
string s[12];
bool used[12][12];
int d[]={0,1,0,-1,0};
void f(int x,int y)
{
    used[x][y]=1;
    for(int r=0;r<4;r++)
    {
        int tx=x+d[r],ty=y+d[r+1];
        if(tx<0||ty<0||tx>=12||ty>=12||used[tx][ty]||s[tx][ty]=='0')continue;
        f(tx,ty);
    }
}
main()
{
    while(cin>>s[0])
    {
        for(int i=1;i<12;i++)cin>>s[i];
        for(int i=0;i<12;i++)for(int j=0;j<12;j++)used[i][j]=0;
        int ans=0;
        for(int i=0;i<12;i++)
        {
            for(int j=0;j<12;j++)
            {
                if(!used[i][j]&&s[i][j]!='0')
                {
                    ans++;
                    f(i,j);
                }
            }
        }
        cout<<ans<<endl;
    }
}
