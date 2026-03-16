#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double> heights;
    double in_data;
    while(cin >> in_data)
    {
        heights.push_back(in_data);
    }
    sort(heights.begin(), heights.end());
    cout << heights.back() - heights.front() << endl;
    return 0;
}

