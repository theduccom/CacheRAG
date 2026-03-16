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


using namespace std;

void Solution()
{
    int n;
    
    cin>>n;
    
    cin.ignore(); // or use cin.get(); ignore() can be used as when you want to input data and segment them by "enter key", if no "ignore()", then it can be seen as the whole data
    
    string str;
    
    while (n--)
    {
        getline(cin, str);
        
        for (int i = 0; i < (int)str.size(); i ++ ) //because size() returned "unsigned int" type, so need to cast to "int"
        {
            if ("Hoshino" == str.substr(i, 7))
            {
                i += 6;
                cout<<"Hoshina";
            }
            else
            {
                cout<<str[i];
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