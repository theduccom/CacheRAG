#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include <vector>
#include <map>
#include<cstdlib>
#include<iomanip>


using namespace std;

void Solution()
{
    string str;
    
    int count = 0;
    
    while (cin>>str)
    {
        string temp = str; //need a declaration temp for comparing
        
        reverse(temp.begin(), temp.end());
        
        if(str == temp)
        {
            count++;
        }
    }
    
    cout<<count<<endl;
}

int main()
{
    Solution();
    return 0;
}