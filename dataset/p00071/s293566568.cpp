#include<iostream>
#include<cstring>
#include<string>
using namespace std;
char tile[15][15];
void solve(int x,int y)
{
    if(tile[x][y]=='1')
    {
        tile[x][y] = '0';
        solve(x+1,y);
        solve(x+2,y);
        solve(x+3,y);
        solve(x,y+1);
        solve(x,y+2);
        solve(x,y+3);
        solve(x-1,y);
        solve(x-2,y);
        solve(x-3,y);
        solve(x,y-1);
        solve(x,y-2);
        solve(x,y-3);
    }
    return ;
}


int main()
{
    int n;
    cin >> n;
    for(int data = 1;data<=n;data++)
    {
        string s;
        getline(cin,s);
        getline(cin,s);
        for(int j=3;j<8+3;j++)for(int i=3;i<8+3;i++)
        {
            cin >> tile[i][j];
        }
        int x,y;
        cin >> x>>y;
        solve(x+2,y+2);
        cout << "Data " << data <<":" << endl;
        for(int j=3;j<8+3;j++)
        {
            for(int i=3;i<8+3;i++)
            {
                cout <<tile[i][j];
            }
        cout << endl;
        }
    }
    return 0;
}