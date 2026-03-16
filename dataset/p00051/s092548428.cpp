#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int n;
    int Min,Max;
    string src;
    
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> src;
        sort(begin(src),end(src));
        Min = stoi(src);
        sort(begin(src),end(src),greater<char>());
        Max = stoi(src);
        cout << Max - Min << endl;
    }
}