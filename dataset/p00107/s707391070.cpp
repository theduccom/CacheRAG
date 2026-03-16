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
#include<set>


using namespace std;

void Solution()
{
    int l, w, h;
    
    while (cin>>l>>w>>h, l) //when l or w or h = 0 it shoud be break
    {
        int n;
        
        cin>>n;
        
        while (n--)
        {
            int r;
            
            cin>>r;
            
            r *= 2;
            
            if((r * r > w * w + h * h) || (r * r > l * l + w * w) || (r * r > l * l + h * h))
            {
                cout<<"OK"<<endl;
            }
            else
            {
                cout<<"NA"<<endl;
            }
        }
    }

}

int main()
{
    Solution();
    return 0;
}