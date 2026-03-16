#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    char f[8][8];
    int x,y,i,j;
    while(1)
    {
        x=y=-1;
        for(i=0;i<8;i++)cin >> f[i];
        if(cin.eof())break;
        for(x=0;x<8;x++)
        {
            for(y=0;y<8;y++)
            {
                if(f[x][y]=='1')
                {
                    i=x;
                    j=y;
                    break;
                }
            }
            if(i==x&&j==y)break;
        }
        if(i<7&&j<7&&f[i+1][j]=='1'&&f[i][j+1]=='1'&&f[i+1][j+1]=='1')printf("A\n");
        else if(i<5&&f[i+3][j]=='1')printf("B\n");
        else if(j<5&&f[i][j+3]=='1')printf("C\n");
        else if(i<6&&j>0&&f[i+2][j-1]=='1')printf("D\n");
        else if(i<7&&j<6&&f[i+1][j+2]=='1')printf("E\n");
        else if(i<6&&j<7&&f[i+2][j+1]=='1')printf("F\n");
        else if(i<7&&j<7&&j>0&&f[i][j+1]=='1'&&f[i+1][j-1]=='1')printf("G\n");
    }
    return 0;
}