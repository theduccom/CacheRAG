#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;


void Solution()
{
    int a[3] = {1, 0, 0};
    
    char m, n;
    char comma;
    
    while (cin>>m>>comma>>n)
    {
        int temp = a[m - 'A']; //swap, and based on ASC||
        a[m - 'A'] = a[n - 'A'];
        a[n - 'A'] = temp;
    }
    
    for(int i=0; i < 3; i++)
    {
        if(a[i] == 1)
        {
            cout<<(char)(i + 'A')<<endl;  //change data to char type
            break;
        }
    }
}

int main()
{
    Solution();
    return 0;
}