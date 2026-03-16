#include <iostream>
#include <stack>

using namespace std;

void Solution()
{
    int a[10]={1,2,4,8,16,32,64,128,256,512};
    
    int n;
    
    stack<int> save;
    
    while(cin>>n)
    {
        for(int i = 9; 0 <= i; i--)
        {
            if(n - a[i] > -1)
            {
                save.push(a[i]);
                
                n = n - a[i];
            }
        }
        
        while(1)
        {
            cout<<save.top();
            
            save.pop();
            
            if (save.empty())
            {
                break;
            }
            else
            {
                cout<<" ";
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