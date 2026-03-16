#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int x,y,s;
int a[15][15]={0};
int main()
{
    while(scanf("%d,%d,%d",&x,&y,&s)!=EOF)
    {
        swap(x,y);
        a[x][y]++;
        if(x>0)a[x-1][y]++;
        if(y>0)a[x][y-1]++;
        a[x+1][y]++;
        a[x][y+1]++;
        if(s>1)
        {
            if(x>0&&y>0)a[x-1][y-1]++;
            if(x>0)a[x-1][y+1]++;
            if(y>0)a[x+1][y-1]++;
            a[x+1][y+1]++;
        }
        if(s>2)
        {
            if(x>1)a[x-2][y]++;
            if(y>1)a[x][y-2]++;
            a[x+2][y]++;
            a[x][y+2]++;
        }
    }
    int ans=0,mx=0;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
        {
            if(a[i][j]==0)ans++;
            if(a[i][j]>mx)mx=a[i][j];
        }
    cout<<ans<<endl<<mx<<endl;
}