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
    int n;
    
    
    
    cin >> n;
    
    while(n--)
    {
        
        string str;
        
        int point = 0;
        
        int out = 0;
        
        int base[3] = {0, 0, 0};
        
        while(cin>>str)
        {
            
            if(str == "HIT")
            {
                if(base[2] == 1)
                {
                    ++point;
                    
                    base[2] = 0;
                }
                
                if(base[1] == 1)
                {
                    base[2] = 1;
                    base[1] = 0;
                }
                
                if(base[0] == 1)
                {
                    base[1] = 1;
                    base[0] = 0;
                }
                
                base[0] = 1; //point
            }
            else if(str == "HOMERUN")
            {
                for(int i=0; i < 3; ++i)
                {
                    point += base[i];
                }
                
                point++;
                
                base[0] = 0;
                base[1] = 0;
                base[2] = 0;
            }
            else
            {
                ++out;
                
                if(out >= 3)
                {
                    cout<<point<<endl;
                    
                    point = 0;
                    out = 0;
                    
                    base[0] = 0;
                    base[1] = 0;
                    base[2] = 0;
                    
                    continue;
                }
            }
        }
    }
    
}

int main()
{
    Solution();
    return 0;
}