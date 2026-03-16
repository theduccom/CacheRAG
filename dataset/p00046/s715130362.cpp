#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<double> height;
    double tmp;

    while(cin >> tmp){
        height.push_back(tmp);
    }

    sort(height.begin(), height.end());

    double min;
    double max;

    min = height[0];
    max = height[height.size()-1];

    cout << max - min << endl;

    return 0;
}