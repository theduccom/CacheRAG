#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<cstdlib>
#include<iomanip>
#include<queue>
#include<set>


using namespace std;

void Solution()
{
    map<string, set<int>> saveData;  //set の中には、各要素がソートされて格納されます。
    string str;
    int n;
    
    while (cin>>str>>n)
    {
        saveData[str].insert(n); // insert int type data to STL
    }
    
    for (map<string, set<int>>::iterator i = saveData.begin(); i != saveData.end(); i++)
    {
        cout<<(i -> first)<<endl;
        
        for (set<int>::iterator j = (i ->second).begin(); j != (i -> second).end(); j++)
        {
            if(j != (i -> second).begin()) // after output the first data, then can be divided by space keey.
            {
                cout<<" ";
            }
            
            cout<< *j;
        }
        
        cout<<endl;
    }
    
}

int main()
{
    Solution();
    return 0;
}