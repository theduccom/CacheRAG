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
    // this problem can be solved by the way which can list up all situations case by case
    // all can be done like this way
    const string poker[] =
    { "null", "one pair", "two pair", "three card", "straight", "full house", "four card"};
    
    int a[5];
    char comma;
    
    while(cin>>a[0]>>comma>>a[1]>>comma>>a[2]>>comma>>a[3]>>comma>>a[4])
    {
        sort(a, a + 5);
        
        // Algorithm
        int pair[5] = {0};
        int count = 0;
        
        for (int i = 0; i < 5; i++)
        {
            if (a[i] == a[i + 1])
            {
                count++;
            }
            else
            {
                pair[count]++;
                count = 0;
            }
        }
        
        if (pair[3] == 1)
        {
            cout << poker[6] << endl;
        }
        else if (pair[1] == 1 && pair[2] == 1)
        {
            cout << poker[5] << endl;
        }
        else if (pair[2] == 1)
        {
            cout << poker[3] << endl;
        }
        else if (pair[1] == 2)
        {
            cout << poker[2] << endl;
        }
        else if (pair[1] == 1)
        {
            cout << poker[1] << endl;
        }
        else if (pair[0] == 5)
        {
//            int i;
//            for (i = 1; i < 4; i++)
//                if (input[i + 1] != input[1] + i)
//                    break;
//            if (i == 4 && ((input[0] == input[1] - 1) || (input[0] == 1)))
//                cout << poker[4] << endl;
//            else
//                cout << poker[0] << endl;
            if((a[0] + 1 == a[1] && a[1] + 1 == a[2] && a[2] + 1 == a[3] && a[3] + 1 == a[4]) ||
               (a[0] == 1 && a[1] == 10 && a[2] == 11 && a[3] == 12 && a[4] == 13))
            {
                cout<<poker[4]<<endl;
            }
            else
            {
                cout<<poker[0]<<endl;
            }
        }
        
    }
}

int main()
{
    Solution();
    return 0;
}