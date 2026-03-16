#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    double height;
    vector<double> v;
    while(cin >> height){
        v.push_back(height);
    }
    
    sort(v.begin(),v.end());
    int len= v.size();
    double dif;
    dif = v[len-1]-v[0];
    cout << dif << endl;
}