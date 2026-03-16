#include<iostream>
using namespace std;
string s[8];
void f(int x,int y)
{
    s[x][y]='0';
    for(int i=-3;i<=3;i++)
    {
        if(x+i>=0&&x+i<8&&s[x+i][y]=='1')f(x+i,y);
        if(y+i>=0&&y+i<8&&s[x][y+i]=='1')f(x,y+i);
    }
}
main()
{
    int t;cin>>t;
    for(int count=1;count<=t;count++)
    {
        for(int i=0;i<8;i++)cin>>s[i];
        int x,y;cin>>x>>y;
        f(y-1,x-1);
        cout<<"Data "<<count<<":"<<endl;
        for(int i=0;i<8;i++)cout<<s[i]<<endl;
    }
}
