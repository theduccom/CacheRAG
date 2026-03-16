#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<iostream>
#include<string>

using namespace std;


void Solution()
{
    int n;
    
    string type;
    char comma;
    
    int a = 0;
    int b = 0;
    int ab = 0;
    int o = 0; //for counting the blood types
    
    
    while (cin>>n>>comma>>type)
    {
        if(type == "A")
        {
            a++;
        }
        else if(type == "B")
        {
            b++;
        }
        else if(type == "O")
        {
            o++;
        }
        else
        {
            ab++;
        }
    }
    
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<ab<<endl;
    cout<<o<<endl;
}

int main()
{
    Solution();
    return 0;
}