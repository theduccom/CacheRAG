#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>

using namespace std;

void Solution()
{
    string a;
    
    while(getline(cin,a))
    {
        
        while (1)
        {
            if( a.find("this") != -1 || a.find("the") != -1 || a.find("that") != -1)
            {
                break;
            }
            
            for(int i = 0; i < (int)a.length(); i++)
            {
                if(a[i]==' '|| a[i]=='.')
                {
                    continue;
                }
                else if(a[i] == 'z') //based on ASC||code , after 'z' is '{'
                {
                    a[i] = 'a';
                }
                else
                {
                    a[i]++; // character would be changed based on ASC|| code
                }
            }
            
        }
        cout<<a<<endl;;
    }
}

int main()
{
    Solution();
    return 0;
}