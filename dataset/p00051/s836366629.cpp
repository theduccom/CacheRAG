#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include <vector>
#include <map>

using namespace std;

void Solution()
{
     int n;
    
    string a;
    int b;
    int c;
    
    cin>>n;
    
    while (n--)
    { 
        cin>>a;
        
        sort(a.begin(), a.end());
        b = atoi(a.c_str()); //string to int
        
        reverse(a.begin(), a.end());
        c = atoi(a.c_str());
        
        cout<<c - b<<endl;
    }
    
}

int main()
{
    Solution();
    return 0;
}