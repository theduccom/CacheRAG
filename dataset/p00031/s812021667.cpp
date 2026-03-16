#include <iostream>

using namespace std;

int main()
{
    int n;
    
    while(cin >> n)
    {
        int t = 1, c = 0;
        
        for(int i = 0; i < 20; i++)
        {
            if(n & t)
            {
                if(c++) { cout << ' '; }
                
                cout << t;
            }
            
            t *= 2;
        }
        
        cout << endl;
    }
    
    return 0;
}