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
    string str;
    
    getline(cin, str);
    
    for(int i=0; i < (int)str.size(); i++) //output directly, by loop
    {
        
        if("peach" == str.substr(i, 5))  //substr(index, length)
        {
            i += 4; // skip to next word, next is i +4 + 1
            cout<<"apple";
        }
        else if("apple" == str.substr(i, 5))
        {
            i += 4;
            cout<<"peach";
        }
        else
        {
            cout<<str[i];
        }
    }
    
    cout<<endl;
}

int main()
{
    Solution();
    return 0;
}