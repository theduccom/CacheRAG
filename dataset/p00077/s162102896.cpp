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
#include <valarray>
#include<stack>
#include<sstream>
#include<math.h>

using namespace std;

void Solution()
{
    string s;
    string rule;
    string origin = " ";
    
    while(cin>>s)
    {
        for(int i = 0; i < (int)s.size();)
        {
            if(s[i] == '@')
            {
                rule = s.substr(i, 3);
               
                i += 3;

                for(int i = 0; i < rule[1] - '0'; i++) //need change char to int
                {
                    cout<<rule[2];
                }
            }
            else
            {
                cout<<s[i];
                i++;
            }
    
        }
        
        cout<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}