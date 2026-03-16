#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include <vector>
#include <map>
#include<cstdlib>
#include<iomanip>
#include<queue>


using namespace std;

void Solution()
{
   	int n;
    
    long long number, perPrice, amount;
    
    bool isUsed;
    //long long valueCheck[4000];
    vector<long long> valueCheck(4001, 0);
    queue<int> que;
    
    while(true)
    {
        isUsed = false;
        
        cin>>n;
        
        if (n == 0)
        {
            break;
        }
        
        while(n--)
        {
            cin>>number>>perPrice>>amount;
            
            valueCheck[number] += perPrice * amount;
            que.push(number);
        }
        
        while (!que.empty())
        {
            if (valueCheck[que.front()] >= 1000000)
            {
                cout<<que.front()<<endl;
                isUsed = true;
            }
            
            valueCheck[que.front()] = 0;
            que.pop();
        }
        
        if (!isUsed)
        {
            cout<<"NA"<<endl;
        }
        
//            if ( valueCheck >= 1000000)
//            {
//                cout<<number<<endl;
//            }
//            else
//            {
//                count++;
//            }
//            
//            if (count == m)
//            {
//                cout<<"NA"<<endl;
//            }
        
    }
}

int main()
{
    Solution();
    return 0;
}