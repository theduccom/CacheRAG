#include <iostream>

using namespace std;

void Solution()
{
    double v;
    
    while(cin>>v)
    {
        double t = v / 9.8;
        double y = t * t * 4.9;
        
        for (int N = 1; ; N++)
        {
            if (5 * (N - 1) > y)
            {
                cout<<N<<endl;
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