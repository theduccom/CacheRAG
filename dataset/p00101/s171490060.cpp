#include <string>
#include <iostream>

using namespace std;

int main()
{
    string S, P; int N;
    
    getline(cin, P);
    
    N = stoi(P);
    
    for(int i = 0; i < N; i++)
    {
        getline(cin, S);
        
        while(S.find("Hoshino") != string::npos)
        {
            S.replace(S.find("Hoshino"), 7, "Hoshina");
        }
        
        cout << S << endl;
    }
    
    return 0;
}