
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <stdio.h>

using namespace std;

void Solution()
{
    int i, j, n, f;
    
    string s1,s2;
    
    cin>>n;
    
    while(n--)
    {
        cin>>s1>>s2;
        
        f=0;
        
        if(s1.size() < s2.size())
        {
            swap(s1, s2);
        }
        
        for(i = 0; i < s2.size(); i++)
        {
            s1[i + s1.size() - s2.size()] += s2[i] - '0';
        }
        
        for(i = s1.size() - 1; i > 0; i--)
        {
            if(s1[i] > '9')
            {
                s1[i] -= 10;
                s1[i - 1]++;
            }
        }
        
        if(s1[0] > '9')
        {
            s1[0] -= 10;
            
            f++;
        }
        
        if(s1.size() + f <= 80)
        {
            if(f) cout<<"1";
           
            cout<<s1;
        }
        else
        {
            cout<<"overflow";
        }
        
        cout<<endl;
    }
}

int main()
{
    Solution();
    return 0;
}