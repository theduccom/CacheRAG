#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{
    int N;
    while ( !cin.eof() )
    {
        cin >> N;
        vector<int> ans;
        
        for (int a = 9; a > -1; a = a-1)
        {   
            if (N >= (1 << a))
            {
                N = N - (1 << a);
                ans.push_back(1 << a);
            }
            
        }
        reverse(ans.begin(), ans.end());
        
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] ;
            if (i == ans.size()-1)
                cout << endl;
            else
                cout << " ";
        }
    }
}