#include <iostream>
#include <stack>

using namespace std;

void Solution()
{
    int a;
    int b;
    int c;
    
    int rect = 0; //initializing
    int lozen = 0;
    
    char comma;
    
    while (cin>>a>>comma>>b>>comma>>c)
    {
        if (a * a + b * b == c * c)
        {
            rect++;
        }
        else if (a == b)
        {
            lozen++;
        }
    }
    cout<<rect<<endl;
    cout<<lozen<<endl;
}

int main()
{
    Solution();
    return 0;
}