#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>


using namespace std;

void Solution()
{
    int sideH, sideW;
    
    char cha[101][101];
    
    int masu;
    int x, y; //in this problem y axis is sideH, x axis is sideW
    
    while (cin>>sideH>>sideW)
    {
        if (sideW == 0 && sideH == 0)
        {
            break;
        }
        
        for (y = 0; y < sideH; y++) //save the data to array
        {
            cin>>cha[y];
        }
        
        masu = x = y = 0; // start from 0, 0
        
        while (true)
        {
            if (cha[y][x] == '.')
            {
                cout<<x<<" "<<y<<endl;
                break;
            }
            
            switch (cha[y][x]) // walk automatically by symbol
            {
                case '^':
                    y--;
                    break;
                case '<':
                    x--;
                    break;
                case 'v':
                    y++;
                    break;
                case '>':
                    x++;
                    break;
            }
            
            masu++;
            
            if (masu > sideH * sideW) // means infinite loop, or out of the limit
            {
                cout<<"LOOP"<<endl;
                break;
            }
        }
    }

}

int main()
{
    Solution();
    return 0;
}