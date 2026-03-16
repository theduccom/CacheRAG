#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    vector<int> amount, price;
    vector<int>::iterator pt;
    vector<int>::iterator at;
    char ch;
    int abuff, pbuff;
    int sum = 0;
    double avg;
    int c=0;
    while(cin >> pbuff >> ch >> abuff)
    {
        amount.push_back(abuff);
        price.push_back(pbuff);
    }
    for(pt = price.begin(), at = amount.begin(); pt != price.end(); pt++,at++ )
    {
        sum += *pt * *at;
        avg += *at;
    }
    avg = avg /amount.size();
    avg = floor(avg + 0.5f);
    cout << sum << endl;
    cout << (int) avg << endl;
    return 0;
}