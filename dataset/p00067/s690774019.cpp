#include<iostream>
#include<cstring>
using namespace std;
#define WMAX 12
#define HMAX 12

int area[14][14];

void solve(int w,int h)
{
    if(area[w][h]==1)
    {
        area[w][h] = 0;
        solve(w-1,h);
        solve(w,h-1);
        solve(w+1,h);
        solve(w,h+1);
    }
}

int main()
{
    while(1)
    {
        int ans = 0;
        char temp;
        memset(area,0,sizeof(area));
        for(int h=1;h<=12;h++)
        {
            for(int w=1;w<=12;w++)
            {
                cin >> temp;
                area[w][h] = (int)(temp-'0');
            }
        }
        if(cin.eof())break;

        for(int h=1;h<=12;h++)
        {
            for(int w=1;w<=12;w++)
            {
                if(area[w][h]==1)
                {
                    ans++;
                    solve(w,h);
                }
            }
        }
        
        cout << ans << endl;

    }
    
    return 0;
}