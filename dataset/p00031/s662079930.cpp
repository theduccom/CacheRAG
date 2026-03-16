#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
int main()
{
    int N;
    while ( !cin.eof() )
    {
        cin >> N;
        vector<int> ans;
        
        for (int a = 0; a < 10; a++)
        {   
            if (N % 2 == 1)
            {
                N = (N - 1) / 2;
                ans.push_back( pow(2,a) );
            }
            else
                N = N / 2;
        }
        
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