#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int sum = 0, cnt = 0;
    double k = 0;
    string str, n;
    while(cin >>str){
        k++;
        stringstream ss(str);
        vector<int> v;
        while(getline(ss, n, ',')) v.push_back(atoi(n.c_str()));
        sum += (v[0] * v[1]);
        cnt += v[1];
    }
    cout <<sum <<endl <<round(cnt / k) <<endl;
    return 0;
}