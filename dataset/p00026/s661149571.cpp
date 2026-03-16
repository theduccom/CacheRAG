#include <iostream>
#include <stack>

using namespace std;

void Solution()
{

    int ink[][2] = {{0,0}, {-1, 0}, {1, 0}, {0, -1}, {0, 1}, {-1, -1}, {-1, 1}, {1, -1}, {1, 1}, {-2, 0}, {2, 0}, {0, 2}, {0, -2}}; // range from small size to big size
    
    int x;
    int y;
    int size;
    char comma;
    
    int a[10][10] = {0}; // the boundary, +1 for judging the spread of ink
    
    int count = 0;
    int density = 0;
    
    while (cin>>x>>comma>>y>>comma>>size)
    {
        for (int i = 0; i <= size * 4; i++)
        {
            if (x + ink[i][0] < 10 && x + ink[i][0] >= 0 && y + ink[i][1] < 10 && y + ink[i][1] >= 0)
            {
                a[x + ink[i][0]][y + ink[i][1]]++;
            }
        
        }
        
    }
    
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if(a[i][j] > 0)
            {
                count = count+1;
            }
            
            if (a[i][j] > density)
            {
                density = a[i][j];
            }
        }
    }

    
    cout<<100 - count<<endl;
    cout<<density<<endl;

}

int main()
{
    Solution();
    return 0;
}